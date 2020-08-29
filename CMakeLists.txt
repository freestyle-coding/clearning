cmake_minimum_required(VERSION 3.16)
project(clearning C)

set(CMAKE_C_STANDARD 99)

add_executable(clearning Stack/main.c Stack/Stack.h Stack/Stack.c Common/Status.h)