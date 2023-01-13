//
// Created by Dino on 9 Jan 2023.
//

#include "Run.h"
#include "Window.h"
#include "State.h"
#include "Menu.h"
#include "Input.h"

namespace game {

    void run() {

        game::adjustConsoleWindow();

        game::GameState a = game::State::getInstance().getState();

        if (a == game::GameState::MAIN_MENU) {

        }
        game::displayMenu();

        user_io::getInput();
    }
}