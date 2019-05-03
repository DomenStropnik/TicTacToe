cmake_minimum_required(VERSION 3.13)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 17)

add_executable(TicTacToe src/main.cpp src/Player.cpp src/GameBoard.cpp)