cmake_minimum_required(VERSION 3.10)

# Project name
project(MathIsland)

# Set c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Add executable
add_executable(project main.cpp src/greeting.cpp)

