cmake_minimum_required(VERSION 3.17.1)

project(tarea_1)

file(GLOB SOURCES "src/*")

add_executable(unidad ${SOURCES})
