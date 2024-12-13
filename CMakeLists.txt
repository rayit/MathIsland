cmake_minimum_required(VERSION 3.10)

# Project name
project(MathIsland)

# Set c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include dir
include_directories(include external/gl2d/include)



# Add gl2d source files
add_subdirectory(external/gl2d)

# Add executable
add_executable(project main.cpp src/greeting.cpp)

# Link dl2d to yout project
target_link_libraries(project PRIVATE gl2d)
