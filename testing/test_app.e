note
	description: "Test application for SIMPLE_UCF"
	author: "Larry Rix"

class
	TEST_APP

create
	make

feature {NONE} -- Initialization

	make
			-- Run the tests.
		do
			print ("Running SIMPLE_UCF tests...%N%N")
			passed := 0
			failed := 0

			run_lib_tests

			print ("%N========================%N")
			print ("Results: " + passed.out + " passed, " + failed.out + " failed%N")

			if failed > 0 then
				print ("TESTS FAILED%N")
			else
				print ("ALL TESTS PASSED%N")
			end
		end

feature {NONE} -- Test Runners

	run_lib_tests
		do
			create lib_tests
			run_test (agent lib_tests.test_ucf_make, "test_ucf_make")
			run_test (agent lib_tests.test_load_string, "test_load_string")
			run_test (agent lib_tests.test_universe_name, "test_universe_name")
			run_test (agent lib_tests.test_libraries_empty, "test_libraries_empty")
			run_test (agent lib_tests.test_ucf_library_make, "test_ucf_library_make")
			run_test (agent lib_tests.test_ucf_library_name, "test_ucf_library_name")
			run_test (agent lib_tests.test_is_valid, "test_is_valid")
			run_test (agent lib_tests.test_heatmap_config_make, "test_heatmap_config_make")
		end

feature {NONE} -- Implementation

	lib_tests: LIB_TESTS

	passed: INTEGER
	failed: INTEGER

	run_test (a_test: PROCEDURE; a_name: STRING)
			-- Run a single test and update counters.
		local
			l_retried: BOOLEAN
		do
			if not l_retried then
				a_test.call (Void)
				print ("  PASS: " + a_name + "%N")
				passed := passed + 1
			end
		rescue
			print ("  FAIL: " + a_name + "%N")
			failed := failed + 1
			l_retried := True
			retry
		end

end
