cmake_minimum_required(VERSION 3.16)
project(part2)

include_directories(${CMAKE_SOURCE_DIR})

add_library(calc STATIC
    calculator.cpp
)

add_executable(main
    ui.cpp
)

target_link_libraries(main PRIVATE calc)
