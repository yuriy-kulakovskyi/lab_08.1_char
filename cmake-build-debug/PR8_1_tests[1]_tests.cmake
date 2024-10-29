add_test([=[CountTest.HandleCount]=]  [==[/Users/yura_kulakovskyi/Documents/C++/AP/PR8/PR8_1_char/cmake-build-debug/PR8_1_tests]==] [==[--gtest_filter=CountTest.HandleCount]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[CountTest.HandleCount]=]  PROPERTIES WORKING_DIRECTORY [==[/Users/yura_kulakovskyi/Documents/C++/AP/PR8/PR8_1_char/cmake-build-debug]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  PR8_1_tests_TESTS CountTest.HandleCount)
