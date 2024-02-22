cmake_minimum_required(VERSION 3.28)

PROJECT(kJengine)

add_executable(test main.c src/cli.c src/field.c)
target_link_libraries(test m)