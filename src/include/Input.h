//
// Created by Dino on 3 Jan 2023.
//

#ifndef CONSOLE_RPG_INPUT_H
#define CONSOLE_RPG_INPUT_H

#include <iostream>
#include "State.h"
#include "Actions.h"

namespace user_io {
    class Input {
    public:
        Input()
                : input_()
        {
        }

        [[nodiscard]] std::string getInput() const { return input_; }

        void setInput(std::string_view in) { input_ = in; }

    private:
        std::string input_;
    };

    template<typename T>
    void checkMapForInputValue(
            std::string_view str,
            const std::unordered_map<std::string, T> &actionMap,
            void (*func)(T enumeration)
    );

    void processMainMenuInput(std::string_view str);

    void evaluateMainMenuInput(ValidActionMainMenu action);

    void processOptionsInput(std::string_view str);

    void evaluateOptionsInput(ValidActionOptions action);

    void processMenuInput(std::string_view str);

    void evaluateMenuInput(ValidActionMenu action);

    void processGameInput(std::string_view str);

    void evaluateGameInput(ValidActionGame action);

    void processBattleInput(std::string_view str);

    void evaluateBattleInput(ValidActionBattle action);

}


#endif //CONSOLE_RPG_INPUT_H
