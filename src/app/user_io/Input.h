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

        bool checkValidInput();
    private:
        std::string input_;
    };

}


#endif //CONSOLE_RPG_INPUT_H
