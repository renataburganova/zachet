cmake_minimum_required(VERSION 3.2...3.27.5)

project(zachet)

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(src)
add_subdirectory(vector)
add_subdirectory(list)

set(CMAKE_SUPPRESS_REGENERATION true)
