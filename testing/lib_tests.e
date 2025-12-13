note
	description: "Tests for SIMPLE_UCF"
	author: "Larry Rix"
	date: "$Date$"
	revision: "$Revision$"
	testing: "covers"

class
	LIB_TESTS

inherit
	TEST_SET_BASE

feature -- Test: UCF Creation

	test_ucf_make
			-- Test UCF creation.
		note
			testing: "covers/{SIMPLE_UCF}.make"
		local
			ucf: SIMPLE_UCF
		do
			create ucf.make
			assert_attached ("ucf created", ucf)
			assert_true ("initially empty name", ucf.universe_name.is_empty)
		end

feature -- Test: Loading

	test_load_string
			-- Test loading UCF from string.
		note
			testing: "covers/{SIMPLE_UCF}.load_string"
		local
			ucf: SIMPLE_UCF
			content: STRING
		do
			create ucf.make
			content := "[universe]%Nname = %"test%"%Nroot = %"D:/prod%""
			ucf.load_string (content)
			if ucf.is_valid then
				assert_strings_equal ("name", "test", ucf.universe_name)
			else
				assert_false ("load failed", ucf.last_errors.is_empty)
			end
		end

feature -- Test: Universe Properties

	test_universe_name
			-- Test universe name access.
		note
			testing: "covers/{SIMPLE_UCF}.universe_name"
		local
			ucf: SIMPLE_UCF
		do
			create ucf.make
			ucf.load_string ("[universe]%Nname = %"simple-eiffel%"")
			assert_strings_equal ("name", "simple-eiffel", ucf.universe_name)
		end

feature -- Test: Libraries

	test_libraries_empty
			-- Test empty libraries initially.
		note
			testing: "covers/{SIMPLE_UCF}.libraries"
		local
			ucf: SIMPLE_UCF
		do
			create ucf.make
			assert_true ("no libraries", ucf.libraries.is_empty)
		end

feature -- Test: Library Info

	test_ucf_library_make
			-- Test UCF library creation.
		note
			testing: "covers/{UCF_LIBRARY}.make"
		local
			lib: UCF_LIBRARY
		do
			create lib.make
			assert_attached ("lib created", lib)
		end

	test_ucf_library_name
			-- Test UCF library name setting.
		note
			testing: "covers/{UCF_LIBRARY}.set_name"
		local
			lib: UCF_LIBRARY
		do
			create lib.make
			lib.set_name ("my_lib")
			assert_strings_equal ("name", "my_lib", lib.name)
		end

feature -- Test: Validation

	test_is_valid
			-- Test UCF validation.
		note
			testing: "covers/{SIMPLE_UCF}.is_valid"
		local
			ucf: SIMPLE_UCF
		do
			create ucf.make
			ucf.load_string ("[universe]%Nname = %"valid%"")
			assert_true ("is valid", ucf.is_valid)
		end

feature -- Test: Heatmap Config

	test_heatmap_config_make
			-- Test heatmap config creation.
		note
			testing: "covers/{UCF_HEATMAP_CONFIG}.make"
		local
			config: UCF_HEATMAP_CONFIG
		do
			create config.make
			assert_attached ("config created", config)
		end

end
