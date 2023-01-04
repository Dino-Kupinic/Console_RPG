//
// Created by Dino on 3 Jan 2023.
//

#ifndef CONSOLE_RPG_INPUT_H
#define CONSOLE_RPG_INPUT_H

#include <iostream>

namespace user_io {
    class Input {
    public:
        Input();

        std::string getInput() { return input_; }
        void setInput(std::string_view in);

    private:
        std::string input_;
    };

    bool checkValidMainMenuInput();
    bool checkValidMenuInput();
    bool checkValidGameInput();
    bool checkValidBattleInput();
}


#endif //CONSOLE_RPG_INPUT_H
