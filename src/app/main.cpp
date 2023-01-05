#include <iostream>

#include "user_io/Command.h"
#include "game/State.h"

int main() {
    game::GameState a = game::State::getInstance().getState();

    if (a == game::GameState::MAIN_MENU) {

    }
    return 0;
}
