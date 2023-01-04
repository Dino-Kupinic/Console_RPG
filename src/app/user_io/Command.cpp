//
// Created by Dino on 3 Jan 2023.
//

#include "Command.h"

namespace user_io {
    void Command::setAction(std::string_view act) {
        action_ = act;
    }

    void Command::setObject(std::string_view obj) {
        object_ = obj;
    }
}