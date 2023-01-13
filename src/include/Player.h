//
// Created by Dino on 7 Jan 2023.
//

#ifndef CONSOLE_RPG_PLAYER_H
#define CONSOLE_RPG_PLAYER_H

#include "Entity.h"
#include "Inventory.h"

namespace game {

    class Player : public Entity {
    public:
        Player(Inventory& inventory)
                : inv_(inventory)
        {
        }

    private:
        int gold_;
        int stamina_;
        Inventory& inv_;
    };

}

#endif //CONSOLE_RPG_PLAYER_H
