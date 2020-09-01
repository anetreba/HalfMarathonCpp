cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

set (BIN "inventory")

set (INC "src/header.h")

set (SRC "main.cpp"
        "src/parse.cpp"
        "src/valid.cpp"
        "src/commands.cpp")

project (INVENTORY)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/..")

add_executable (${BIN} ${SRC} ${INC})