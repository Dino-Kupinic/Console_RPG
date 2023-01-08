cmake_minimum_required(VERSION 3.24)
project(Console_RPG)

set(CMAKE_CXX_STANDARD 20)

include_directories(src/include)

add_executable(
        Console_RPG
        src/main.cpp
        src/app/Command.cpp
        src/include/Command.h
        src/app/Input.cpp
        src/include/Input.h
        src/include/State.h
        src/include/Actions.h
        src/include/Item.h
        src/include/Potion.h src/include/Weapon.h src/include/Armor.h src/include/Player.h src/app/Entity.cpp src/include/Entity.h)
