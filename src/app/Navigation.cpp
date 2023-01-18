//
// Created by Dino on 15 Jan 2023.
//

#include "Navigation.h"
#include <iostream>

namespace MainMenu {
    void play() {
        int a;
        std::cin >> a;

    }

    void displayOptions() {

    }

    void quitGame() {
        throw quitGameException("Game terminated");
    }
}