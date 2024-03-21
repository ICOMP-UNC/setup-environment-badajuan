cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

project(
    "FirstProjectInCmake"
    VERSION 0.0.1
    DESCRIPTION "Cmake C Project Template for Operating Systems II"
    LANGUAGES C
)

set(CMAKE_C_STANDARD 17)

include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})