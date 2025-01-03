cmake_minimum_required(VERSION 3.28)
project(set-up-cmake VERSION 1.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Debug)

#message(STATUS "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

file(GLOB_RECURSE SRC_FILES "src/*.cpp")
#message(STATUS "SRC_FILES: ${SRC_FILES}")


add_executable(hi ${SRC_FILES})
target_include_directories(hi PUBLIC src)
target_link_libraries(hi PRIVATE SFML::Graphics SFML::Audio)
