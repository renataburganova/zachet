cmake_minimum_required(VERSION 3.2...3.27.5)

project(zachet)

set(DS_LIB "ds_lib")

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(src)
add_subdirectory(test)

set(CMAKE_SUPPRESS_REGENERATION true)
