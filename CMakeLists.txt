cmake_minimum_required(VERSION 3.5)

project(mechanism LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

add_executable(mechanism main.cpp display.cpp brush.cpp math_of_mech.cpp brush.h math_of_mech.h)

target_link_libraries(zalupa
    PRIVATE
        glfw
    OpenGL::GL)
