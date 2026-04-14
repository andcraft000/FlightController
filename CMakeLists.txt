cmake_minimum_required(VERSION 3.10)

project(Flightcontroller)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(sim
    src/main.cpp
    src/Vec3.cpp
    src/RigidBody.cpp
)