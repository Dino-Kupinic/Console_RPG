//
// Created by Dino on 7 Jan 2023.
//

#ifndef CONSOLE_RPG_ENTITY_H
#define CONSOLE_RPG_ENTITY_H

#include "Level.h"

namespace game {

    class Entity {
    public:
        Entity(int hp, int mana, int lvl)
                : health(hp)
                , mana(mana)
                , level(lvl)
        {
        }

    private:
        int health;
        int mana;
        Level level;
    };

}


#endif //CONSOLE_RPG_ENTITY_H
