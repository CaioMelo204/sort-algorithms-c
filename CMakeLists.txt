cmake_minimum_required(VERSION 3.29)
project(sort_algorithms C)

set(CMAKE_C_STANDARD 11)

add_executable(sort_algorithms main.c
        selection-sort.c
        insert-sort.c
        bubble-sort.c)
