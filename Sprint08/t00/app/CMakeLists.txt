cmake_minimum_required(VERSION 3.17.2)
set(CMAKE_CXX_STANDARD 17)

project(smartPointers)

add_subdirectory(src)
add_executable(smartPointers main.cpp)
target_link_libraries(smartPointers smartPointers_app)