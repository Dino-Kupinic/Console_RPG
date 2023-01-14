//
// Created by Dino on 7 Jan 2023.
//

#ifndef CONSOLE_RPG_WEAPON_H
#define CONSOLE_RPG_WEAPON_H

#include "Item.h"

namespace objects {

    class Weapon : public objects::Item {
    public:
        Weapon(std::string_view name,
               int physicalDmg,
               int magicDmg,
               int holyDmg,
               int darkDmg,
               double weight
        )
                : name_(name)
                , physicalDamage_(physicalDmg)
                , magicDamage_(magicDmg)
                , holyDamage_(holyDmg)
                , darkDamage(darkDmg)
                , weight(weight)
        {
        }

        Weapon(std::string_view name, int physicalDmg, double weight)
                : name_(name)
                , physicalDamage_(physicalDmg)
                , weight(weight)
        {
        }

    private:
        std::string name_;

        int physicalDamage_;
        int magicDamage_;
        int holyDamage_;
        int darkDamage;

        double weight;
    };

}

#endif //CONSOLE_RPG_WEAPON_H
