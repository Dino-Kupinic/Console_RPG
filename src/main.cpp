#include <iostream>

#include "Command.h"
#include "State.h"

int main() {
    game::GameState a = game::State::getInstance().getState();

    if (a == game::GameState::MAIN_MENU) {

    }
    return 0;
}
