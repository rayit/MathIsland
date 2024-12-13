cmake_minimum_required(VERSION 3.10)

# Project name
project(MathIsland)

# Set c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add SDL2 as a module
add_subdirectory(external/SDL2)

# Find SDL2
find_package(SDL2 REQUIRED)

# Set required SDL2 flags for project
include_directories(include ${SDL2_INCLUDE_DIRS})
link_directories(${SDL_LIBRARY_DIRS})

# Add executable
add_executable(project main.cpp src/greeting.cpp)

target_link_libraries(project SDL2::SDL2)

