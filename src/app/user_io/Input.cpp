//
// Created by Dino on 3 Jan 2023.
//

#include <unordered_map>
#include "Input.h"
#include "../Actions.h"

namespace user_io {
    void Input::setInput(std::string_view in) {
        input_ = in;
    }

    void dispatchActionCheck(const game::State &state, std::string_view str) {
        if (state.getInMainMenu()) {
            processMainMenuInput(str);
            return;
        }

        if (state.getInMenu()) {
            processOptionsInput(str);
            return;
        }

        if (state.getInOptions()) {
            processOptionsInput(std::string_view());
            return;
        }

        if (state.getInGame()) {
            checkValidGameInput();
            return;
        }

        if (state.getInBattle()) {
            checkValidBattleInput();
            return;
        }
    }


    void processMainMenuInput(std::string_view str) {
        std::unordered_map<std::string, ValidActionMenu> actionMap = {
                {"exit",    ValidActionMenu::exit},
                {"play",    ValidActionMenu::play},
                {"options", ValidActionMenu::options},
                {"credits", ValidActionMenu::credits}
        };

        checkMapForInputValue(str, actionMap, &evaluateMainMenuInput);

    }

    void checkMapForInputValue(
            std::string_view str,
            const std::unordered_map<std::string, ValidActionMenu> &actionMap,
            void (*func)(ValidActionMenu)
    ) {
        std::string expectedAction{str};
        auto iterator = actionMap.find(expectedAction);

        if (iterator != actionMap.end()) {
            ValidActionMenu actionMenu = iterator->second;
            func(actionMenu);
        } else {
            // Invalid Action by user
        }
    }

    void evaluateMainMenuInput(ValidActionMenu action) {
        switch (action) {
            case ValidActionMenu::play:
                //play
                break;
            case ValidActionMenu::options:
                //display options
                break;
            case ValidActionMenu::credits:
                //display credits
                break;
            default:
                //exit game
        }
    }

    void processOptionsInput(std::string_view str) {
        std::unordered_map<std::string, ValidActionOptions> actionMap = {
                {"exit", ValidActionOptions::exit}
        };

    }

    void evaluateOptionsInput(ValidActionOptions action) {

    }

    bool checkValidGameInput() {

    }

    bool checkValidBattleInput() {

    }


}