cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

project(
    "FirstProjectInCmake"
    VERSION 1.1.0
    DESCRIPTION "Cmake C Project Template for Operating Systems II"
    LANGUAGES C
)

include(CTest)

set(CMAKE_C_STANDARD 17)

include_directories(include)

include(FetchContent)

set(UNITY_GIT_URL "https://github.com/ThrowTheSwitch/Unity.git")

set(FETCHCONTENT_QUIET OFF)

FetchContent_Declare(
	Unity
	GIT_REPOSITORY ${UNITY_GIT_URL}
	SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external/Unity
	UPDATE_COMMAND "" # disable update command
)

FetchContent_MakeAvailable(Unity)

file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})

add_subdirectory(lib/libdyn)
add_subdirectory(lib/libsta)

target_include_directories(${PROJECT_NAME} PUBLIC lib/libdyn/include)
target_include_directories(${PROJECT_NAME} PUBLIC lib/libsta/include)

target_link_libraries(${PROJECT_NAME} StatiClib DynamiClib)

if (RUN_TESTS EQUAL 1 OR RUN_COVERAGE EQUAL 1)
	add_subdirectory(tests)
endif()