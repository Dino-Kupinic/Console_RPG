//
// Created by Dino on 18 Jan 2023.
//

#include "State.h"

namespace game {

    GameState getState() {
        return State::getInstance()->getState_();
    }

    void setState(GameState gameState) {
        State::getInstance()->setState_(gameState);
    }

}
