#Cmake Version control
cmake_minimum_required(VERSION 3.10)

# additional compiler flags
add_compile_options(-Wall -Wextra)

# include directories
include_directories(include)

# project name
project(Sklep)

# source files
file(GLOB SOURCE "src/*.cpp")

# object files library
add_library(obj OBJECT ${SOURCE})

# exec
add_executable(program.out $<TARGET_OBJECTS:obj>)