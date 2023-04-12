cmake_minimum_required(VERSION 3.22)
project(Recursive)

set(CMAKE_CXX_STANDARD 14)

add_executable(Recursive main.cpp Factorial.cpp Factorial.h Fibonacci.cpp Fibonacci.h HanoiTower.cpp HanoiTower.h Question.cpp Question.h Queen.cpp Queen.h)
