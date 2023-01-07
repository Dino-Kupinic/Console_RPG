//
// Created by Dino on 7 Jan 2023.
//

#ifndef CONSOLE_RPG_ARMOR_H
#define CONSOLE_RPG_ARMOR_H

#include "Item.h"

namespace objects {

    enum class ArmorType {
        HELM,
        CHEST,
        GAUNTLET,
        LEGS
    };

    class Armor : public objects::Item {
    public:
    private:
        ArmorType type_;
        int resistance_;

    };
}

#endif //CONSOLE_RPG_ARMOR_H
