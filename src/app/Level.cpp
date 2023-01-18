//
// Created by Dino on 14 Jan 2023.
//

#include "Level.h"

namespace game {

    int Level::getLevel() const { return level; }
    int Level::getCurrentExperience() const { return currentExperience; }
    int Level::getRequiredExperience() const { return requiredExperience; }
    double Level::getXpMultiplier() const { return xpMultiplier; }

    void Level::setLevel(int lvl) { level = lvl; }
    void Level::setCurrentExperience(int currentExp) { currentExperience = currentExp; }
    void Level::setRequiredExperience(int requiredExp) { requiredExperience = requiredExp; }
    void Level::setXpMultiplier(double xpMult) { xpMultiplier = xpMult; }

}