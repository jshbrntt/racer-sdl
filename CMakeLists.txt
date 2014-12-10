cmake_minimum_required(VERSION 2.8)
project(racer-sdl)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
SET(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${racer-sdl_SOURCE_DIR}/cmake")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${racer-sdl_SOURCE_DIR}/build/${CMAKE_BUILD_TYPE}")

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

file(GLOB SOURCE_FILES src/*.cpp src/*.hpp)
add_executable(racer-sdl ${SOURCE_FILES})

MESSAGE("${SDL2_LIBRARY}")
target_link_libraries(racer-sdl ${SDL2_LIBRARY})

