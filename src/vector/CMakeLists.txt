target_sources(${DS_LIB}
	PRIVATE
		vector.cpp
	PUBLIC
		vector.hpp
)

target_include_directories(${DS_LIB} PUBLIC
	${PROJECT_SOURCE_DIR}/src/vector
)