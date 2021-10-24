cmake_minimum_required(VERSION 3.19)
project(task2)

set(CMAKE_CXX_STANDARD 17)

add_executable(task2 main.cpp container.cpp container.h shape.cpp shape.h sphere.cpp sphere.h parallelepiped.cpp parallelepiped.h tetrahedron.cpp tetrahedron.h)