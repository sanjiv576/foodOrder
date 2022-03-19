cmake_minimum_required(VERSION 3.20)
project(foodOrdering)

set(CMAKE_CXX_STANDARD 11)

add_executable(foodOrdering main.cpp)
add_executable(myDatabase database.cpp)
add_executable(exp experiment.cpp)
add_executable(encapsulation encapsulating.h)
