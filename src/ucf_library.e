note
	description: "UCF Library definition - represents a library in the universe"
	date: "$Date$"
	revision: "$Revision$"

class
	UCF_LIBRARY

create
	make

feature {NONE} -- Initialization

	make
			-- Initialize library
		do
			create name.make_empty
			create location.make_empty
			create resolved_path.make_empty
			create ecf.make_empty
			create tags.make (5)
		end

feature -- Access

	name: STRING_32 assign set_name
			-- Library name (e.g., "simple_json")

	location: STRING_32 assign set_location
			-- Original location with environment variable (e.g., "$SIMPLE_JSON")

	resolved_path: STRING_32 assign set_resolved_path
			-- Resolved absolute path (e.g., "D:/prod/simple_json")

	ecf: STRING_32 assign set_ecf
			-- ECF filename (e.g., "simple_json.ecf")

	tags: ARRAYED_LIST [STRING_32]
			-- Classification tags (e.g., ["data", "serialization"])

feature -- Element change

	set_name (a_name: STRING_32)
			-- Set `name'
		require
			name_not_void: a_name /= Void
		do
			name := a_name
		ensure
			name_set: name = a_name
		end

	set_location (a_location: STRING_32)
			-- Set `location'
		require
			location_not_void: a_location /= Void
		do
			location := a_location
		ensure
			location_set: location = a_location
		end

	set_resolved_path (a_path: STRING_32)
			-- Set `resolved_path'
		require
			path_not_void: a_path /= Void
		do
			resolved_path := a_path
		ensure
			resolved_path_set: resolved_path = a_path
		end

	set_ecf (a_ecf: STRING_32)
			-- Set `ecf'
		require
			ecf_not_void: a_ecf /= Void
		do
			ecf := a_ecf
		ensure
			ecf_set: ecf = a_ecf
		end

feature -- Computed

	full_ecf_path: STRING_32
			-- Full path to ECF file
		do
			if resolved_path.is_empty or ecf.is_empty then
				create Result.make_empty
			else
				Result := resolved_path + "/" + ecf
			end
		ensure
			result_attached: Result /= Void
		end

feature -- Status

	has_tag (a_tag: STRING_32): BOOLEAN
			-- Does library have given tag?
		require
			tag_not_void: a_tag /= Void
		do
			Result := across tags as ic some ic.same_string_general (a_tag) end
		end

	is_stdlib: BOOLEAN
			-- Is this a standard library (from $ISE_LIBRARY)?
		do
			Result := location.has_substring ("$ISE_LIBRARY")
		end

	is_simple_library: BOOLEAN
			-- Is this a simple_* ecosystem library?
		do
			Result := location.has_substring ("$SIMPLE_") or
				name.starts_with ("simple_")
		end

end
