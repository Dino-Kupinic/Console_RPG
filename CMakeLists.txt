cmake_minimum_required(VERSION 3.24)
project(Console_RPG)

set(CMAKE_CXX_STANDARD 20)

add_executable(Console_RPG src/app/main.cpp src/app/user_io/Command.cpp src/app/user_io/Command.h src/app/user_io/Input.cpp src/app/user_io/Input.h src/app/game/State.cpp src/app/game/State.h src/app/Actions.h src/app/objects/Equipment.cpp src/app/objects/Equipment.h src/app/objects/Item.cpp src/app/objects/Item.h)
