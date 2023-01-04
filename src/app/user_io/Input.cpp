//
// Created by Dino on 3 Jan 2023.
//

#include <unordered_map>
#include "Input.h"
#include "../game/State.h"
#include "../Actions.h"

namespace user_io {
    void Input::setInput(std::string_view in) {
        input_ = in;
    }

    void dispatchActionCheck(game::State state) {
        if (state.getUndefined()) {
            throw std::runtime_error("No valid State");

        } else if (state.getInMainMenu()) {

            checkValidMainMenuInput();

        } else if (state.getInMenu()) {

            checkValidMenuInput();

        } else if (state.getInGame()) {

            checkValidGameInput();

        } else {

            checkValidBattleInput();

        }
    }

    bool checkValidMainMenuInput() {
        std::unordered_map<std::string, ValidActionMenu> actionMap = {
                {"exit", ValidActionMenu::exit},
                {"play", ValidActionMenu::play},
                {"options", ValidActionMenu::options},
                {"credits", ValidActionMenu::credits}
        };
    }

    bool checkValidMenuInput() {

    }

    bool checkValidGameInput() {

    }

    bool checkValidBattleInput() {

    }


}