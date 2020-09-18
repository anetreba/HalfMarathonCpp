cmake_minimum_required(VERSION 3.18.2)

project(libString LANGUAGES CXX)
add_library(libString INTERFACE)
target_include_directories(libString INTERFACE .)