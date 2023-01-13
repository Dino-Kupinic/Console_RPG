//
// Created by Dino on 13 Jan 2023.
//

#ifndef CONSOLE_RPG_INVENTORY_H
#define CONSOLE_RPG_INVENTORY_H

#include <map>
#include "Item.h"

namespace game {

    class Inventory {
    public:
        Inventory()
                : inventory()
        {
        }

        objects::Item getItem(int index) { return inventory[index]; };

        void addItem(int index, objects::Item item);
        void removeItem(int index);
    private:
        std::map<int, objects::Item> inventory;
    };

}



#endif //CONSOLE_RPG_INVENTORY_H
