//
// Created by Dino on 3 Jan 2023.
//

#ifndef CONSOLE_RPG_INPUT_H
#define CONSOLE_RPG_INPUT_H

#include <iostream>
#include "../game/State.h"
#include "../Actions.h"

namespace user_io {
    class Input {
    public:
        Input() : input_()
        {
        }

        std::string getInput() { return input_; }
        void setInput(std::string_view in);

    private:
        std::string input_;
    };

    void checkMapForInputValue(
            std::string_view str,
            const std::unordered_map<std::string, ValidActionMenu> &actionMap,
            void (*func)(ValidActionMenu)
    );

    void processMainMenuInput(std::string_view str);
    void evaluateMainMenuInput(ValidActionMenu action);

    void processOptionsInput(std::string_view str);
    void evaluateOptionsInput(ValidActionOptions action);
    bool checkValidGameInput();
    bool checkValidBattleInput();
}


#endif //CONSOLE_RPG_INPUT_H
