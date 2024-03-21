cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

project(
    "DynamiClib"
    VERSION 1.0.0
    DESCRIPTION "Cmake C Library Template for OSII"
    LANGUAGES C
)

set(CMAKE_C_STANDARD 17)

include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.c")

add_library(${PROJECT_NAME} SHARED ${SOURCES})