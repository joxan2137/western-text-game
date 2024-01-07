cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        combat.cpp
        characters.h
        Player.cpp
        Player.h
        Item.cpp
        Item.h
        food.h)
