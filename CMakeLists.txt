cmake_minimum_required(VERSION 3.14)

project(tuctl)

add_executable(tuctl "src/main.c")

target_link_libraries(tuctl ncurses)
