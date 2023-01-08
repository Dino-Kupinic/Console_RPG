//
// Created by Dino on 7 Jan 2023.
//

#ifndef CONSOLE_RPG_POTION_H
#define CONSOLE_RPG_POTION_H

#include "Item.h"

namespace objects {

    class Potion : public objects::Item{
    private:
        Potion(std::string_view name, const int& hp, const int& mana, const int& stamina)
                : name_(name)
                , healthRegenValue_(hp)
                , manaRegenValue_(mana)
                , staminaRegenValue_(stamina)
        {
        }

    private:
        std::string name_;
        int healthRegenValue_;
        int manaRegenValue_;
        int staminaRegenValue_;
    };

}

#endif //CONSOLE_RPG_POTION_H
