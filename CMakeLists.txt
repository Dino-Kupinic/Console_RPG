cmake_minimum_required(VERSION 3.24)
project(Console_RPG)

set(CMAKE_CXX_STANDARD 20)

add_executable(Console_RPG src/app/main.cpp src/app/user_io/Command.cpp src/app/user_io/Command.h src/app/user_io/Input.cpp src/app/user_io/Input.h src/app/user_io/State.cpp src/app/user_io/State.h)
