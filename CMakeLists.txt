cmake_minimum_required(VERSION 3.31.4)

set(PROJECT_NAME "cohel") # CUSTOMISE: your project name
set(PROJECT_VERSION 0.1.0) # CUSTOMISE: project version
set(CMAKE_CXX_STANDARD 20) # CUSTOMISE: standard

# development help
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(${PROJECT_NAME} VERSION ${PROJECT_VERSION})

# Include Conan-generated toolchain
include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)

# add all files of source folder
file(GLOB SOURCES
	src/*.h
	src/*.cpp
)

find_package(fmt REQUIRED)


# $source_files is a space-delimited list of filenames.
add_executable(${PROJECT_NAME} ${SOURCES})  # Specifies the executable to build.

target_link_libraries(${PROJECT_NAME} fmt::fmt)