add_executable(
	list_tests
	test_list.cpp
	templates_list.cpp
)

target_link_libraries(
	list_tests 
 	gtest_main 
 	${DS_LIB}
)

add_test(list_tests list_tests)