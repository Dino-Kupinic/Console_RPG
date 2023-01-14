//
// Created by Dino on 14 Jan 2023.
//

#ifndef CONSOLE_RPG_LEVEL_H
#define CONSOLE_RPG_LEVEL_H

namespace game {

    class Level {
    public:
        Level()
                : level(1)
                , currentExperience(0)
                , requiredExperience(10)
                , xpMultiplier(1.0f)
        {
        }

        explicit Level(int lvl)
                : level(lvl)
                , currentExperience(0)
                , requiredExperience(0)
                , xpMultiplier(0)
        {
        }

        Level(int lvl, int currExp, int reqExp, int xpMult)
                : level(lvl)
                , currentExperience(currExp)
                , requiredExperience(reqExp)
                , xpMultiplier(xpMult)
        {
        }

        [[nodiscard]] int getLevel() const;
        [[nodiscard]] int getCurrentExperience() const;
        [[nodiscard]] int getRequiredExperience() const;
        [[nodiscard]] double getXpMultiplier() const;

        void setLevel(int lvl);
        void setCurrentExperience(int currentExp);
        void setRequiredExperience(int requiredExp);
        void setXpMultiplier(double xpMultiplier);

    private:
        int level;
        int currentExperience{};
        int requiredExperience{};
        double xpMultiplier{};
    };
}

#endif //CONSOLE_RPG_LEVEL_H
