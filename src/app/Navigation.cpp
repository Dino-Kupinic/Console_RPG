//
// Created by Dino on 15 Jan 2023.
//

#include <iostream>
#include "Navigation.h"
#include "State.h"

namespace MainMenu {
    void play() {

        game::State::getInstance()->setState_(game::GameState::MENU);
        int a;
        std::cin >> a;
    }

    void displayOptions() {

    }

    void quitGame() {
        throw quitGameException("Game terminated");
    }
}