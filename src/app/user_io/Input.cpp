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
            processMenuInput(str);
            return;
        }

        if (state.getInOptions()) {
            processOptionsInput(str);
            return;
        }

        if (state.getInGame()) {
            processGameInput(str);
            return;
        }

        if (state.getInBattle()) {
            processBattleInput(str);
            return;
        }
    }


    void processMainMenuInput(std::string_view str) {
        std::unordered_map<std::string, ValidActionMainMenu> actionMap = {
                {"exit",    ValidActionMainMenu::quit},
                {"play",    ValidActionMainMenu::play},
                {"options", ValidActionMainMenu::options},
                {"credits", ValidActionMainMenu::credits}
        };

        user_io::checkMapForInputValue(str, actionMap, &evaluateMainMenuInput);
    }

    void processOptionsInput(std::string_view str) {
        std::unordered_map<std::string, ValidActionOptions> actionMap = {
                {"exit", ValidActionOptions::exit}
        };

        user_io::checkMapForInputValue(str, actionMap, &evaluateOptionsInput);
    }

    void processMenuInput(std::string_view str) {
        std::unordered_map<std::string, ValidActionMenu> actionMap = {
                {"exit", ValidActionMenu::exit},
                {"save", ValidActionMenu::save},
                {"resume", ValidActionMenu::resume}
        };

        user_io::checkMapForInputValue(str, actionMap, &evaluateMenuInput);
    }

    template <typename T>
    void checkMapForInputValue(
            std::string_view str,
            const std::unordered_map<std::string, T> &actionMap,
            void (*func)(T enumeration)
    ) {
        std::string expectedAction {str};
        auto iterator = actionMap.find(expectedAction);

        if (iterator != actionMap.end()) {
            T actionMenu = iterator->second;
            func(actionMenu);
        } else {
            // Invalid Action by user
        }
    }

    void evaluateMainMenuInput(ValidActionMainMenu action) {
        switch (action) {
            case ValidActionMainMenu::play:
                //play
                break;
            case ValidActionMainMenu::options:
                //display options
                break;
            case ValidActionMainMenu::credits:
                //display credits
                break;
            case ValidActionMainMenu::quit:
                //exit game
                break;
        }
    }

    void evaluateOptionsInput(ValidActionOptions action) {
        switch (action) {
            case ValidActionOptions::exit:
                // Back to main menu
                break;
        }
    }

    void evaluateMenuInput(ValidActionMenu action) {
        switch (action) {
            case ValidActionMenu::exit:
                // back to main menu
                break;
            case ValidActionMenu::save:
                // save game, maybe json or something
                break;
            case ValidActionMenu::resume:
                // resume game
                break;


        }
    }
}
