//
// Created by Dino on 4 Jan 2023.
//

#ifndef CONSOLE_RPG_STATE_H
#define CONSOLE_RPG_STATE_H

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
        static State &getInstance() {
            static State instance;
            return instance;
        }

        [[nodiscard]] GameState getState() const {
            return state_;
        }

        void setState(const GameState &st) {
            state_ = st;
        }

    private:
        State()
                : state_(GameState::MAIN_MENU)
        {
        }

        GameState state_;
    };

}


#endif //CONSOLE_RPG_STATE_H
