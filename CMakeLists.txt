cmake_minimum_required(VERSION 3.10)

project(CalculatorProgram)

set(SOURCE_FILES
	test.cpp
	calculator.cpp
)

# Add source files
add_executable(program ${SOURCE_FILES})
