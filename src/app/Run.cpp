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
        adjustConsoleWindow();

        GameState state = State::getInstance().getState();

        if (state == GameState::MAIN_MENU) {
            displayMenu();
            std::string userInput {user_io::getInput()};
            user_io::dispatchActionCheck(userInput);
        }
    }


}