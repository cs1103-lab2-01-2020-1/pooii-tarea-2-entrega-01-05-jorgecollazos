cmake_minimum_required(VERSION 3.10)

project(pooii-tarea-2-entrega-01-05-jorgecollazos)

file(GLOB SOURCES "src/*", "src/t_stack/*", "src/stack/*")

add_executable(pooii-tarea-2-entrega-01-05-jorgecollazos ${SOURCES})