//
// Created by Dino on 9 Jan 2023.
//

#include "Run.h"
#include "Window.h"
#include "State.h"
#include "Menu.h"
#include "Input.h"
#include "Navigation.h"

namespace game {

    void run() {

        adjustConsoleWindow();

        GameState a = State::getInstance().getState();

        if (a == GameState::MAIN_MENU) {
            displayMenu();
            std::string b = user_io::getInput();
            if (b == "quit") {
                MainMenu::quitGame();
            }
        }

        user_io::getInput();


    }
}