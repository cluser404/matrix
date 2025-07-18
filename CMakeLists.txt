cmake_minimum_required(VERSION 3.10)

project(matrix C)

add_library(matrix SHARED src/matrix.c)


target_include_directories(matrix PUBLIC include)


target_compile_definitions(matrix PRIVATE MATRIX_EXPORTS)


set_target_properties(matrix PROPERTIES
	PREFIX ""
	OUTPUT_NAME "matrix"
)


# Library testing code
option(BUILD_TESTS "Build test executables" OFF)

if(BUILD_TESTS)
	add_executable(test_matrix test/test_matrix.c)
	target_link_libraries(test_matrix matrix)
	target_include_directories(test_matrix PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
endif()	