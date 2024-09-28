cmake_minimum_required(VERSION 3.28.2)
project("3-cmake VERSION 1.0.0")

add_library(
    rezlib
    lib/rezlib.c)

add_executable(main
               src/main.c)
