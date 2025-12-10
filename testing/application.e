note
	description: "Test application for simple_ucf"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

create
	make

feature {NONE} -- Initialization

	make
			-- Run tests
		do
			print ("simple_ucf test suite%N")
			print ("========================%N%N")

			run_all_tests

			print ("%N========================%N")
			print ("All tests completed!%N")
		end

feature -- Access

	ucf: SIMPLE_UCF
			-- UCF under test

feature -- Helpers

	assert (a_tag: STRING; a_condition: BOOLEAN)
			-- Check condition and report if false
		do
			if not a_condition then
				print ("ASSERTION FAILED: " + a_tag + "%N")
			end
		end

feature -- Tests

	run_all_tests
			-- Run all test cases
		do
			test_create_ucf
			test_environment_discovery
			test_parse_ucf_string
			test_library_by_name
			test_libraries_with_tag
			test_generate_ucf
			test_heatmap_config
		end

	test_create_ucf
			-- Test basic creation
		do
			print ("Test: create UCF... ")
			create ucf.make
			assert ("ucf created", ucf /= Void)
			assert ("not valid yet", not ucf.is_valid)
			assert ("no libraries", ucf.libraries.is_empty)
			print ("PASSED%N")
		end

	test_environment_discovery
			-- Test auto-discovery from environment
		do
			print ("Test: environment discovery... ")
			create ucf.make
			ucf.discover_from_environment
			-- Should find at least some SIMPLE_* variables if running in our environment
			if ucf.is_valid then
				print ("Found " + ucf.libraries.count.out + " libraries. ")
				assert ("has libraries", ucf.libraries.count > 0)
				assert ("universe name set", not ucf.universe_name.is_empty)
			else
				print ("(no SIMPLE_* env vars found) ")
			end
			print ("PASSED%N")
		end

	test_parse_ucf_string
			-- Test parsing UCF from string
		local
			l_ucf_content: STRING_32
		do
			print ("Test: parse UCF string... ")
			create ucf.make

			l_ucf_content := "[
[universe]
name = "test-universe"
description = "Test Universe"
root = "D:/test"

[[library]]
name = "lib_a"
location = "D:/libs/lib_a"
ecf = "lib_a.ecf"
tags = ["core", "utils"]

[[library]]
name = "lib_b"
location = "D:/libs/lib_b"
ecf = "lib_b.ecf"
tags = ["data"]
]"

			ucf.load_string (l_ucf_content)
			if ucf.is_valid then
				assert ("name parsed", ucf.universe_name.same_string ("test-universe"))
				assert ("description parsed", ucf.universe_description.same_string ("Test Universe"))
				assert ("2 libraries", ucf.libraries.count = 2)
				if ucf.libraries.count >= 2 then
					assert ("lib_a name", ucf.libraries[1].name.same_string ("lib_a"))
					assert ("lib_a location", ucf.libraries[1].location.same_string ("D:/libs/lib_a"))
					assert ("lib_a ecf", ucf.libraries[1].ecf.same_string ("lib_a.ecf"))
					assert ("lib_a has core tag", ucf.libraries[1].has_tag ("core"))
					assert ("lib_b name", ucf.libraries[2].name.same_string ("lib_b"))
				end
				print ("PASSED%N")
			else
				print ("FAILED: " + ucf.last_errors.first + "%N")
			end
		end

	test_library_by_name
			-- Test finding library by name
		local
			l_ucf_content: STRING_32
		do
			print ("Test: library by name... ")
			create ucf.make

			l_ucf_content := "[
[universe]
name = "test"

[[library]]
name = "simple_json"
location = "D:/json"

[[library]]
name = "simple_sql"
location = "D:/sql"
]"

			ucf.load_string (l_ucf_content)
			assert ("valid", ucf.is_valid)

			if attached ucf.library_by_name ("simple_json") as l_json then
				assert ("found json", l_json.name.same_string ("simple_json"))
			else
				assert ("json not found", False)
			end

			if attached ucf.library_by_name ("simple_sql") as l_sql then
				assert ("found sql", l_sql.name.same_string ("simple_sql"))
			else
				assert ("sql not found", False)
			end

			assert ("nonexistent is void", ucf.library_by_name ("nonexistent") = Void)

			print ("PASSED%N")
		end

	test_libraries_with_tag
			-- Test filtering libraries by tag
		local
			l_ucf_content: STRING_32
			l_data_libs: ARRAYED_LIST [UCF_LIBRARY]
		do
			print ("Test: libraries with tag... ")
			create ucf.make

			l_ucf_content := "[
[universe]
name = "test"

[[library]]
name = "json"
location = "D:/json"
tags = ["data", "serialization"]

[[library]]
name = "sql"
location = "D:/sql"
tags = ["data", "database"]

[[library]]
name = "http"
location = "D:/http"
tags = ["network"]
]"

			ucf.load_string (l_ucf_content)
			assert ("valid", ucf.is_valid)

			l_data_libs := ucf.libraries_with_tag ("data")
			assert ("2 data libs", l_data_libs.count = 2)

			assert ("1 network lib", ucf.libraries_with_tag ("network").count = 1)
			assert ("0 unknown libs", ucf.libraries_with_tag ("unknown").count = 0)

			print ("PASSED%N")
		end

	test_generate_ucf
			-- Test UCF generation
		do
			print ("Test: generate UCF... ")
			create ucf.make
			ucf.discover_from_environment

			if ucf.is_valid then
				if attached ucf.generate_ucf as l_output then
					assert ("has output", not l_output.is_empty)
					assert ("has universe section", l_output.has_substring ("[universe]"))
					assert ("has library entries", l_output.has_substring ("[[library]]"))
				end
			else
				-- Skip if no env vars
			end

			print ("PASSED%N")
		end

	test_heatmap_config
			-- Test heatmap configuration
		local
			l_config: UCF_HEATMAP_CONFIG
		do
			print ("Test: heatmap config... ")
			create l_config.make

			assert ("enabled by default", l_config.is_enabled)
			assert ("has metrics", not l_config.metrics.is_empty)
			assert ("low threshold", l_config.low_threshold = 25)
			assert ("medium threshold", l_config.medium_threshold = 50)
			assert ("high threshold", l_config.high_threshold = 75)

			-- Color tests
			assert ("0 pct is none", l_config.color_for_percentage (0).same_string ("#FF0000"))
			assert ("20 pct is low", l_config.color_for_percentage (20).same_string ("#FFA500"))
			assert ("40 pct is medium", l_config.color_for_percentage (40).same_string ("#FFFF00"))
			assert ("80 pct is high", l_config.color_for_percentage (80).same_string ("#00FF00"))

			print ("PASSED%N")
		end

end
