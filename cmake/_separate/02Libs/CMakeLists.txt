cmake_minimum_required(VERSION 2.8)
# Project name
project(my_project)
# List of files to build executable
set(SOURCE_EXE main.c)
# List of files to build library
set(SOURCE_LIB somelib.c)
# Create static library with defined name
#  name - internal name in CMake (and probably that was filename)
add_library(mylib STATIC ${SOURCE_LIB})
# Create executable
add_executable(myprog ${SOURCE_EXE})
# Link executable and library
target_link_libraries(myprog mylib)
