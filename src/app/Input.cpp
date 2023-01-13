//
// Created by Dino on 3 Jan 2023.
//

#include <unordered_map>
#include <algorithm>
#include <cctype>
#include "Input.h"
#include "PossibleActions.h"

namespace user_io {

    void dispatchActionCheck(std::string_view str) {
        std::string inputToLowerCase{str};
        std::transform(inputToLowerCase.begin(), inputToLowerCase.end(), inputToLowerCase.begin(), ::tolower);

        switch (game::State::getInstance().getState()) {
            case game::GameState::MAIN_MENU:
                processMainMenuInput(inputToLowerCase);
                break;
            case game::GameState::OPTIONS:
                processOptionsInput(inputToLowerCase);
                break;
            case game::GameState::MENU:
                processMenuInput(inputToLowerCase);
                break;
            case game::GameState::GAME:
                processGameInput(inputToLowerCase);
                break;
            case game::GameState::BATTLE:
                processBattleInput(inputToLowerCase);
                break;
        }
    }

    void processMainMenuInput(std::string_view str) {
        std::unordered_map<std::string, ValidActionMainMenu> actionMap {
                {"exit",    ValidActionMainMenu::quit},
                {"play",    ValidActionMainMenu::play},
                {"options", ValidActionMainMenu::options},
                {"credits", ValidActionMainMenu::credits}
        };

        user_io::checkMapForInputValue(str, actionMap, &evaluateMainMenuInput);
    }

    void processOptionsInput(std::string_view str) {
        std::unordered_map<std::string, ValidActionOptions> actionMap {
                {"exit", ValidActionOptions::exit}
        };

        user_io::checkMapForInputValue(str, actionMap, &evaluateOptionsInput);
    }
    
    void processMenuInput(std::string_view str) {
        std::unordered_map<std::string, ValidActionMenu> actionMap {
                {"exit",   ValidActionMenu::exit},
                {"save",   ValidActionMenu::save},
                {"resume", ValidActionMenu::resume}
        };

        user_io::checkMapForInputValue(str, actionMap, &evaluateMenuInput);
    }

    void processGameInput(std::string_view str) {
        std::unordered_map<std::string, ValidActionGame> actionMap {
                {"go",     ValidActionGame::go},
                {"run",    ValidActionGame::run},
                {"talk",   ValidActionGame::talk},
                {"fight",  ValidActionGame::fight},
                {"ignore", ValidActionGame::ignore}
        };

        user_io::checkMapForInputValue(str, actionMap, &evaluateGameInput);
    }

    void processBattleInput(std::string_view str) {
        std::unordered_map<std::string, ValidActionBattle> actionMap {
                {"flee",   ValidActionBattle::flee},
                {"attack", ValidActionBattle::attack},
                {"defend", ValidActionBattle::defend},
                {"item",   ValidActionBattle::item}
        };

        user_io::checkMapForInputValue(str, actionMap, &evaluateBattleInput);
    }

    template<typename T>
    void checkMapForInputValue(
            std::string_view str,
            const std::unordered_map<std::string, T> &actionMap,
            void (*func)(T enumeration)
    ) {
        std::string expectedAction{str};
        auto iterator = actionMap.find(expectedAction);

        if (iterator != actionMap.end()) {
            T actionMenu = iterator->second;
            func(actionMenu);
        } else {
            displayInputError();
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
        displayInputError();
    }

    void evaluateOptionsInput(ValidActionOptions action) {
        switch (action) {
            case ValidActionOptions::exit:
                // Back to main menu
                break;
        }
        displayInputError();
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
        displayInputError();
    }

    void evaluateGameInput(ValidActionGame action) {
        switch (action) {
            case ValidActionGame::go:
                // walk slower but don't consume stamina
                // You might not make it in time for an event
                break;
            case ValidActionGame::run:
                // get fast somewhere and consume stamina
                break;
            case ValidActionGame::talk:
                // talk with an NPC
                break;
            case ValidActionGame::fight:
                // init a fight with NPC/Monster etc.
                break;
            case ValidActionGame::ignore:
                // Ignore quest by NPC
                break;
        }
        displayInputError();
    }

    void evaluateBattleInput(ValidActionBattle action) {
        switch (action) {
            case ValidActionBattle::flee:
                // exit battle and back to game/map
                break;
            case ValidActionBattle::attack:
                // attack the enemy
                break;
            case ValidActionBattle::defend:
                // reduce damage taken for 1 round
                break;
            case ValidActionBattle::item:
                // open the item menu and choose an item
                break;
        }
        displayInputError();
    }

    std::string getInput() {
        displayPrompt();
        std::string input;
        std::getline(std::cin, input);
        return input;
    }

    void displayPrompt() {
        std::cout << "\n  Action >>> ";
    }

    void displayInputError() {
        std::cout << "\n  invalid input! \n";
        displayPrompt();
        getInput();
    }


}
