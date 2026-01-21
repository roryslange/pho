cmake_minimum_required(VERSION 3.10)

project(pho LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(pho src/main.cpp)

find_package(fmt CONFIG REQUIRED)

target_link_libraries(pho 
    PRIVATE fmt::fmt
)