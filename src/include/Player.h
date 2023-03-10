//
// Created by Dino on 7 Jan 2023.
//

#ifndef CONSOLE_RPG_PLAYER_H
#define CONSOLE_RPG_PLAYER_H

#include "Entity.h"
#include "Inventory.h"
#include "Level.h"

namespace game {

    class Player : public Entity {
    public:
        Player(Inventory& inventory)
                : Entity(50, 10, 1)
                , inv_(inventory)
                , stamina_(20)
                , gold_(0)
        {
        }

        void levelUp();
        void gainExperience(int amount);

    private:
        Level playerLevel_;
        Inventory& inv_;
        int stamina_;
        int gold_;
    };

}

#endif //CONSOLE_RPG_PLAYER_H
