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
        {
        }

        Level(int lvl, int currExp, int reqExp)
                : level(lvl)
                , currentExperience(currExp)
                , requiredExperience(reqExp)
        {
        }

        [[nodiscard]] int getLevel() const;
        [[nodiscard]] int getCurrentExperience() const;
        [[nodiscard]] int getRequiredExperience() const;

        void setLevel(int lvl);
        void setCurrentExperience(int currentExp);
        void setRequiredExperience(int requiredExp);

    private:
        int level;
        int currentExperience;
        int requiredExperience;
    };
}

#endif //CONSOLE_RPG_LEVEL_H
