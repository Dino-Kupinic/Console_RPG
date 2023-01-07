//
// Created by Dino on 5 Jan 2023.
//

#ifndef CONSOLE_RPG_EQUIPMENT_H
#define CONSOLE_RPG_EQUIPMENT_H

#include <unordered_map>
#include <iostream>
#include "Item.h"

namespace objects {

    class Equipment : public Item {
    public:
        Equipment()
                : item_("", 0), broken(false)
        {
        }

        Equipment(std::string_view str, int val, bool status)
                : item_(str, val), broken(status)
        {
        }

    private:
        Item item_;
        bool broken;
    };

}



#endif //CONSOLE_RPG_EQUIPMENT_H
