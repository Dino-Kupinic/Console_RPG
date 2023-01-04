//
// Created by Dino on 4 Jan 2023.
//

#ifndef CONSOLE_RPG_STATE_H
#define CONSOLE_RPG_STATE_H

namespace game {
    class State {
    public:
        State()
            : inMainMenu_(false)
            , inOptions_(false)
            , inMenu_(false)
            , inGame_(false)
            , inBattle_(false)
        {
        }

        [[nodiscard]] bool getInMainMenu() const { return inMainMenu_; }
        [[nodiscard]] bool getInOptions() const { return inOptions_; }
        [[nodiscard]] bool getInMenu() const { return inMenu_; }
        [[nodiscard]] bool getInGame() const { return inGame_; }
        [[nodiscard]] bool getInBattle() const { return inBattle_; }
    private:
        bool inMainMenu_;
        bool inOptions_;
        bool inMenu_;
        bool inGame_;
        bool inBattle_;
    };

}


#endif //CONSOLE_RPG_STATE_H
