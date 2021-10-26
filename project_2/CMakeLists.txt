cmake_minimum_required(VERSION 3.20)
project(project_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(project_2 main.cpp airplane.cpp airplane.h train.cpp train.h ship.cpp ship.h transport.cpp transport.h container.cpp container.h random.h)
