cmake_minimum_required(VERSION 3.12)
project(tic_tac_toe)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(tic_tac_toe
        Board.cpp
        Board.h
        GameLogic.cpp
        GameLogic.h
        tictactoe.cpp
        Util.h)
