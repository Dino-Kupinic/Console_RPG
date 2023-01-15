//
// Created by Dino on 15 Jan 2023.
//

#include "Player.h"

namespace game {

    void Player::levelUp() {
        playerLevel_.setLevel(playerLevel_.getLevel() + 1);
    }

    void Player::gainExperience(int amount) {
        playerLevel_.setCurrentExperience(playerLevel_.getCurrentExperience() + amount);
    }
}