//
// Created by Dino on 3 Jan 2023.
//

#ifndef CONSOLE_RPG_COMMAND_H
#define CONSOLE_RPG_COMMAND_H

#include <iostream>
#include <unordered_map>
#include "PossibleActions.h"
#include "Item.h"

namespace user_io {

    class Command {
    public:
        /*
        Command() : action_(), object_() {}
        Command(std::string_view act, std::string_view obj) : action_(act), object_(obj) {}

        [[nodiscard]] std::string getAction() const { return action_; }
        [[nodiscard]] std::string getObject() const { return object_; }
        void setAction(std::string_view act);
        void setObject(std::string_view obj);
        */
    private:
        ValidActionGame action_;
        objects::Item object_;
    };

}

#endif //CONSOLE_RPG_COMMAND_H
