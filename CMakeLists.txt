cmake_minimum_required(VERSION 3.27)
project(Data_Structures_in_C C)

set(CMAKE_C_STANDARD 23)

add_executable(Data_Structures_in_C src/main.c
        src/stack.h
        src/queue.h
        src/sorting.h
        src/dynamicarray.h
        src/linkedlist.h
        src/dynamicarray.c
        src/linkedlist.c
        src/stack.c
        src/sorting.c
        src/queue.c
        src/utility.h
)

add_subdirectory(unity)
target_link_libraries(${PROJECT_NAME} unity)