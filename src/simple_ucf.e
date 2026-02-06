note
	description: "[
		SIMPLE_UCF - Universe Configuration File parser and manager.

		UCF defines an Eiffel ecosystem - a collection of related projects/libraries
		that should be analyzed together for cross-project tooling.

		Features:
		- Parse UCF files (TOML format)
		- Auto-discover libraries from environment variables
		- Resolve paths and environment variable expansion
		- Provide unified view of ecosystem libraries

		Example UCF:
			[universe]
			name = "simple-eiffel"
			root = "D:/prod"

			[[library]]
			name = "simple_json"
			location = "$SIMPLE_JSON"
			ecf = "simple_json.ecf"
			tags = ["data", "serialization"]

		Usage:
			create ucf.make
			ucf.load_file ("D:/prod/simple_universe.ucf")
			if ucf.is_valid then
				across ucf.libraries as lib loop
					print (lib.name + ": " + lib.resolved_path + "%N")
				end
			end
	]"
	date: "$Date$"
	revision: "$Revision$"

class
	SIMPLE_UCF

create
	make

feature {NONE} -- Initialization

	make
			-- Create UCF manager
		do
			create toml
			create universe_name.make_empty
			create universe_root.make_empty
			create universe_description.make_empty
			create libraries.make (50)
			create stdlib_location.make_empty
			create stdlib_includes.make (10)
			create heatmap_config.make
			create last_errors.make (5)
		end

feature -- Access

	universe_name: STRING_32
			-- Name of the universe

	universe_description: STRING_32
			-- Description

	universe_root: STRING_32
			-- Root directory of the universe

	libraries: ARRAYED_LIST [UCF_LIBRARY]
			-- All libraries in the universe

	stdlib_location: STRING_32
			-- Standard library location (usually $ISE_LIBRARY)

	stdlib_includes: ARRAYED_LIST [STRING_32]
			-- Standard library modules to include

	heatmap_config: UCF_HEATMAP_CONFIG
			-- Heat map configuration

feature -- Status

	is_valid: BOOLEAN
			-- Was last load successful?

	last_errors: ARRAYED_LIST [STRING_32]
			-- Errors from last operation

feature -- Loading

	load_file (a_path: STRING_32)
			-- Load UCF from file
		require
			path_not_void: a_path /= Void
			path_not_empty: not a_path.is_empty
		local
			l_file: SIMPLE_FILE
		do
			reset
			create l_file.make (a_path)
			if l_file.exists then
				if attached l_file.load as l_content and then not l_content.is_empty then
					parse_ucf (l_content)
				else
					last_errors.extend ("Failed to read file: " + a_path)
					is_valid := False
				end
			else
				last_errors.extend ("File not found: " + a_path)
				is_valid := False
			end
		end

	load_string (a_ucf: STRING_32)
			-- Load UCF from string
		require
			ucf_not_void: a_ucf /= Void
		do
			reset
			parse_ucf (a_ucf)
		end

	discover_from_environment
			-- Auto-discover libraries.
			-- First tries SIMPLE_EIFFEL root, then falls back to legacy SIMPLE_* variables.
		local
			l_exec: EXECUTION_ENVIRONMENT
		do
			reset
			create l_exec

			-- First try SIMPLE_EIFFEL root discovery (new method)
			if attached l_exec.item ("SIMPLE_EIFFEL") as l_root then
				discover_from_simple_eiffel_root_impl (l_root.to_string_32)
			end

			-- If nothing found, fall back to legacy discovery
			if libraries.is_empty then
				discover_from_legacy_env_vars
			end

			is_valid := not libraries.is_empty
			if not is_valid then
				last_errors.extend ("No libraries found. Set SIMPLE_EIFFEL to your ecosystem root directory.")
			end
		end

	discover_from_simple_eiffel_root
			-- Auto-discover libraries from SIMPLE_EIFFEL root directory.
			-- This is the primary discovery method - scans subdirectories for simple_* folders.
		local
			l_exec: EXECUTION_ENVIRONMENT
		do
			reset
			create l_exec

			if attached l_exec.item ("SIMPLE_EIFFEL") as l_root then
				discover_from_simple_eiffel_root_impl (l_root.to_string_32)
				is_valid := not libraries.is_empty
			else
				last_errors.extend ("SIMPLE_EIFFEL environment variable not set")
				is_valid := False
			end
		end

	discover_from_legacy_env_vars
			-- Auto-discover libraries from legacy SIMPLE_* environment variables.
			-- Kept for backward compatibility.
		local
			l_exec: EXECUTION_ENVIRONMENT
			l_vars: ARRAYED_LIST [STRING_32]
			l_lib: UCF_LIBRARY
		do
			-- Don't reset - this may be called as fallback
			create l_exec
			l_vars := get_simple_env_vars

			universe_name := "simple-eiffel"
			universe_description := "Auto-discovered Simple Eiffel ecosystem (legacy)"

			across l_vars as ic loop
				-- Skip SIMPLE_EIFFEL itself - it's the root, not a library
				if not ic.same_string_general ("SIMPLE_EIFFEL") then
					if attached l_exec.item (ic) as l_path then
						create l_lib.make
						l_lib.name := ic.as_lower
						l_lib.location := "$" + ic
						l_lib.resolved_path := l_path
						l_lib.ecf := l_lib.name + ".ecf"
						libraries.extend (l_lib)
					end
				end
			end
		end

feature -- Query

	library_by_name (a_name: STRING_32): detachable UCF_LIBRARY
			-- Find library by name
		require
			name_not_void: a_name /= Void
		do
			across libraries as ic loop
				if ic.name.same_string_general (a_name) then
					Result := ic
				end
			end
		end

	libraries_with_tag (a_tag: STRING_32): ARRAYED_LIST [UCF_LIBRARY]
			-- All libraries with given tag
		require
			tag_not_void: a_tag /= Void
		do
			create Result.make (10)
			across libraries as ic loop
				if ic.has_tag (a_tag) then
					Result.extend (ic)
				end
			end
		ensure
			result_attached: Result /= Void
		end

	all_source_paths: ARRAYED_LIST [STRING_32]
			-- All source directories from all libraries
		do
			create Result.make (libraries.count * 2)
			across libraries as ic loop
				if not ic.resolved_path.is_empty then
					Result.extend (ic.resolved_path)
				end
			end
		ensure
			result_attached: Result /= Void
		end

feature -- Generation

	generate_ucf: STRING_32
			-- Generate UCF content from current state
		local
			l_builder: STRING_32
		do
			create l_builder.make (2048)
			l_builder.append ("# Generated Universe Configuration File%N")
			l_builder.append ("# Generated: " + current_timestamp + "%N%N")

			l_builder.append ("[universe]%N")
			l_builder.append ("name = %"" + universe_name + "%"%N")
			if not universe_description.is_empty then
				l_builder.append ("description = %"" + universe_description + "%"%N")
			end
			if not universe_root.is_empty then
				l_builder.append ("root = %"" + universe_root + "%"%N")
			end
			l_builder.append ("%N")

			if not stdlib_location.is_empty then
				l_builder.append ("[stdlib]%N")
				l_builder.append ("location = %"" + stdlib_location + "%"%N")
				if not stdlib_includes.is_empty then
					l_builder.append ("include = [")
					across stdlib_includes as ic loop
						if @ic.target_index > 1 then
							l_builder.append (", ")
						end
						l_builder.append ("%"" + ic + "%"")
					end
					l_builder.append ("]%N")
				end
				l_builder.append ("%N")
			end

			across libraries as ic loop
				l_builder.append ("[[library]]%N")
				l_builder.append ("name = %"" + ic.name + "%"%N")
				l_builder.append ("location = %"" + ic.location + "%"%N")
				if not ic.ecf.is_empty then
					l_builder.append ("ecf = %"" + ic.ecf + "%"%N")
				end
				if not ic.tags.is_empty then
					l_builder.append ("tags = [")
					across ic.tags as t loop
						if @t.target_index > 1 then
							l_builder.append (", ")
						end
						l_builder.append ("%"" + t + "%"")
					end
					l_builder.append ("]%N")
				end
				l_builder.append ("%N")
			end

			Result := l_builder
		ensure
			result_attached: Result /= Void
		end

feature {NONE} -- Parsing

	parse_ucf (a_content: STRING_32)
			-- Parse UCF content
		require
			content_not_void: a_content /= Void
		local
			l_table: detachable TOML_TABLE
			l_lib: UCF_LIBRARY
		do
			l_table := toml.parse (a_content)

			if attached l_table then
				-- Parse [universe] section
				if attached l_table.item ("universe") as l_universe and then attached {TOML_TABLE} l_universe as l_univ_table then
					if attached l_univ_table.string_item ("name") as l_name then
						universe_name := l_name
					end
					if attached l_univ_table.string_item ("description") as l_desc then
						universe_description := l_desc
					end
					if attached l_univ_table.string_item ("root") as l_root then
						universe_root := resolve_path (l_root)
					end
				end

				-- Parse [stdlib] section
				if attached l_table.item ("stdlib") as l_stdlib and then attached {TOML_TABLE} l_stdlib as l_std_table then
					if attached l_std_table.string_item ("location") as l_loc then
						stdlib_location := l_loc
					end
					if attached l_std_table.item ("include") as l_inc and then attached {TOML_ARRAY} l_inc as l_inc_arr then
						parse_string_array (l_inc_arr, stdlib_includes)
					end
				end

				-- Parse [[library]] array
				if attached l_table.item ("library") as l_libs and then attached {TOML_ARRAY} l_libs as l_lib_arr then
					across 1 |..| l_lib_arr.count as i loop
						if attached {TOML_TABLE} l_lib_arr.item (i) as l_lib_table then
							create l_lib.make
							if attached l_lib_table.string_item ("name") as l_name then
								l_lib.name := l_name
							end
							if attached l_lib_table.string_item ("location") as l_loc then
								l_lib.location := l_loc
								l_lib.resolved_path := resolve_path (l_loc)
							end
							if attached l_lib_table.string_item ("ecf") as l_ecf then
								l_lib.ecf := l_ecf
							end
							if attached l_lib_table.item ("tags") as l_tags and then attached {TOML_ARRAY} l_tags as l_tags_arr then
								parse_string_array (l_tags_arr, l_lib.tags)
							end
							libraries.extend (l_lib)
						end
					end
				end

				-- Parse [heatmap] section
				if attached l_table.item ("heatmap") as l_hm and then attached {TOML_TABLE} l_hm as l_hm_table then
					parse_heatmap_config (l_hm_table)
				end

				is_valid := True
			else
				last_errors.extend ("Failed to parse TOML: " + toml.errors_as_string)
				is_valid := False
			end
		end

	parse_string_array (a_array: TOML_ARRAY; a_target: ARRAYED_LIST [STRING_32])
			-- Parse TOML array of strings into target list
		require
			array_not_void: a_array /= Void
			target_not_void: a_target /= Void
		do
			across 1 |..| a_array.count as i loop
				if attached {TOML_STRING} a_array.item (i) as l_str then
					a_target.extend (l_str.value)
				end
			end
		end

	parse_heatmap_config (a_table: TOML_TABLE)
			-- Parse heatmap configuration
		require
			table_not_void: a_table /= Void
		do
			if attached a_table.boolean_item ("enabled") as l_enabled then
				heatmap_config.is_enabled := l_enabled
			end
			if attached a_table.item ("metrics") as l_m and then attached {TOML_ARRAY} l_m as l_metrics then
				parse_string_array (l_metrics, heatmap_config.metrics)
			end
		end

feature {NONE} -- Path Resolution

	resolve_path (a_path: STRING_32): STRING_32
			-- Resolve environment variables in path
		require
			path_not_void: a_path /= Void
		local
			l_result: STRING_32
			l_start, l_end: INTEGER
			l_var_name: STRING_32
			l_exec: EXECUTION_ENVIRONMENT
		do
			create l_exec
			l_result := a_path.twin

			-- Expand $VAR syntax
			from
				l_start := l_result.index_of ('$', 1)
			until
				l_start = 0
			loop
				from
					l_end := l_start + 1
				until
					l_end > l_result.count or else
					l_result[l_end] = '\' or else
					l_result[l_end] = '/'
				loop
					l_end := l_end + 1
				end

				l_var_name := l_result.substring (l_start + 1, l_end - 1)
				if attached l_exec.item (l_var_name) as l_val then
					l_result.replace_substring (l_val, l_start, l_end - 1)
				end

				l_start := l_result.index_of ('$', l_start + 1)
			end

			-- Normalize path separators
			l_result.replace_substring_all ("\", "/")

			Result := l_result
		ensure
			result_attached: Result /= Void
		end

feature {NONE} -- Environment Discovery

	discover_from_simple_eiffel_root_impl (a_root: STRING_32)
			-- Discover libraries from SIMPLE_EIFFEL root directory.
			-- Scans for simple_* subdirectories containing .ecf files.
		require
			root_not_empty: not a_root.is_empty
		local
			l_dir: DIRECTORY
			l_entry_path: STRING_32
			l_ecf_path: STRING_32
			l_ecf_file: RAW_FILE
			l_lib: UCF_LIBRARY
		do
			universe_name := "simple-eiffel"
			universe_description := "Auto-discovered from $SIMPLE_EIFFEL"
			universe_root := a_root

			create l_dir.make_with_name (a_root)
			if l_dir.exists then
				l_dir.open_read
				across l_dir.entries as entry loop
					if attached entry.name as l_name then
						-- Look for simple_* directories
						if l_name.starts_with ("simple_") and then not l_name.same_string (".") and then not l_name.same_string ("..") then
							l_entry_path := a_root + "/" + l_name
							-- Check if it's a directory with an ECF file
							create l_dir.make_with_name (l_entry_path)
							if l_dir.exists then
								l_ecf_path := l_entry_path + "/" + l_name + ".ecf"
								create l_ecf_file.make_with_name (l_ecf_path)
								if l_ecf_file.exists then
									create l_lib.make
									l_lib.name := l_name
									l_lib.location := "$SIMPLE_EIFFEL/" + l_name
									l_lib.resolved_path := l_entry_path
									l_lib.ecf := l_name + ".ecf"
									libraries.extend (l_lib)
								end
							end
						end
					end
				end
				l_dir.close
			end
		end

	get_simple_env_vars: ARRAYED_LIST [STRING_32]
			-- Get all SIMPLE_* environment variable names dynamically.
			-- Uses SIMPLE_ENV.names_with_prefix for true discovery.
		local
			l_env: SIMPLE_ENV
			l_exec: EXECUTION_ENVIRONMENT
		do
			create l_env
			create l_exec

			-- Dynamic discovery: enumerate all SIMPLE_* env vars
			Result := l_env.names_with_prefix ("SIMPLE_")

			-- Filter to only those that have actual paths set
			from Result.start until Result.after loop
				if attached l_exec.item (Result.item.to_string_8) as l_val and then not l_val.is_empty then
					Result.forth
				else
					Result.remove
				end
			end
		ensure
			result_attached: Result /= Void
		end

feature {NONE} -- Helpers

	reset
			-- Reset state
		do
			universe_name.wipe_out
			universe_description.wipe_out
			universe_root.wipe_out
			libraries.wipe_out
			stdlib_location.wipe_out
			stdlib_includes.wipe_out
			heatmap_config.reset
			last_errors.wipe_out
			is_valid := False
		end

	current_timestamp: STRING_32
			-- Current timestamp as string
		local
			l_date: SIMPLE_DATE_TIME
		do
			create l_date.make_now
			Result := l_date.out
		end

feature {NONE} -- Implementation

	toml: SIMPLE_TOML
			-- TOML parser

end
