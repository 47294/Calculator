add_test( UmnozhenieTest.num1 /dev/calculator/bin/calculator.test [==[--gtest_filter=UmnozhenieTest.num1]==] --gtest_also_run_disabled_tests)
set_tests_properties( UmnozhenieTest.num1 PROPERTIES WORKING_DIRECTORY /dev/calculator/bin SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( calculator.test_TESTS UmnozhenieTest.num1)
