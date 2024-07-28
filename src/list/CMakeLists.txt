target_sources(${DS_LIB}
	PRIVATE
		doubly_linked_list.cpp
	PUBLIC
		doubly_linked_list.hpp
)

target_include_directories(${DS_LIB} PUBLIC
	${PROJECT_SOURCE_DIR}/src/list
)