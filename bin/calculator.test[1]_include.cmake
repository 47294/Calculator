if(EXISTS "/dev/calculator/bin/calculator.test[1]_tests.cmake")
  include("/dev/calculator/bin/calculator.test[1]_tests.cmake")
else()
  add_test(calculator.test_NOT_BUILT calculator.test_NOT_BUILT)
endif()