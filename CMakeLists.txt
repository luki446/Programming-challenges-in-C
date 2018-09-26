cmake_minimum_required(VERSION 3.10)
project(C-challenges C)

set(CMAKE_C_STANDARD 99)
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/ )
if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")
endif()

add_definitions(-DSDL_STATIC)

add_subdirectory(ext/SDL/)
include_directories(ext/SDL/include/)

include_directories(include/)

add_subdirectory(000-unit-converter)
add_subdirectory(001-word-counter)
add_subdirectory(002-clock)