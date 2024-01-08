cmake_minimum_required(VERSION 3.27)
project(Data_Structures_in_C C)

set(CMAKE_C_STANDARD 23)

add_executable(Data_Structures_in_C main.c
        stack.h
        queue.h
        priorityqueue.h
        sorting.h)
