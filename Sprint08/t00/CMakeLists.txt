cmake_minimum_required(VERSION 3.17.2)
project(t00)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(app)
set_target_properties(smartPointers PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../../")