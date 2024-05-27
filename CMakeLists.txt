cmake_minimum_required(VERSION 3.27)
project(guess_me)

set(CMAKE_CXX_STANDARD 23)

add_executable(guess_me src/main.cpp
        src/main.h
        src/Game.cpp
        src/Game.h
        src/Utils.cpp
        src/Utils.h)
