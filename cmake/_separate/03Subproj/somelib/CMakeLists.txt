cmake_minimum_required(VERSION 2.8)

project(mylib)
set(SOURCE_LIB somelib.c)
add_library(slib STATIC ${SOURCE_LIB})
