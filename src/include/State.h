//
// Created by Dino on 4 Jan 2023.
//

#ifndef CONSOLE_RPG_STATE_H
#define CONSOLE_RPG_STATE_H

#include <iostream>

namespace game {

    enum class GameState {
        MAIN_MENU,
        OPTIONS,
        MENU,
        GAME,
        BATTLE
    };

    class State {
    public:
        static State* &getInstance() {
            if (instance_ == nullptr) {
                instance_ = new State;
            }
            return instance_;
        }

        [[nodiscard]] GameState getState_() const {
            return state_;
        }

        void setState_(const GameState &st) {
            state_ = st;
        }

    private:
        State()
                : state_(GameState::MAIN_MENU)
        {
        }

        GameState state_;
        static State* instance_;
    };

    GameState getState();
    void setState(GameState gameState);
}


#endif //CONSOLE_RPG_STATE_H
