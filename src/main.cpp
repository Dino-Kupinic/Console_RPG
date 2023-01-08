#include <iostream>

#include "State.h"
#include "Menu.h"
#include "Windows.h"

int main() {
    SetConsoleTitle("Console RPG by Dino Kupinic");
    game::GameState a = game::State::getInstance().getState();

    if (a == game::GameState::MAIN_MENU) {

    }
    game::displayMenu();
    int b;
    std::cin >> b;
    return 0;
}
