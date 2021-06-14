cmake_minimum_required(VERSION 3.19)
project(data_structure C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(C_Unit_1)

add_executable(data_structure
        C_Unit_1/mian.c
        C_Unit_1/question1.h)
