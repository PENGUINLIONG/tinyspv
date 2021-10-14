cmake_minimum_required (VERSION 3.10)

project ("tinyspv" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

if (NOT CMAKE_BUILD_TYPE)
    message(STATUS "No build type selected, default to Release")
    set(CMAKE_BUILD_TYPE "Release" CACHE PATH "Build Type" FORCE)
endif()

set(INC_DIRS
    "${PROJECT_SOURCE_DIR}/include"
    "${PROJECT_SOURCE_DIR}/third/SPIRV-Headers/include"
)

# The testbench library.
include_directories(${INC_DIRS})
file(GLOB_RECURSE SRCS "${PROJECT_SOURCE_DIR}/src/*")
file(GLOB_RECURSE INCS "${PROJECT_SOURCE_DIR}/include/*")
add_executable(tinyspv ${SRCS} ${INCS})
