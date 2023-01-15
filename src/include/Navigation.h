//
// Created by Dino on 15 Jan 2023.
//

#ifndef CONSOLE_RPG_NAVIGATION_H
#define CONSOLE_RPG_NAVIGATION_H

#include <exception>
#include <string>

namespace MainMenu {
    void play();
    void displayOptions();
    void quitGame();

    class quitGameException : public std::exception {
    public:
        explicit quitGameException(std::string_view message)
                : message_(message)
        {
        }

        [[nodiscard]] const char* what() const noexcept override {
            return message_.c_str();
        }

    private:
        std::string message_;
    };
}

namespace Options {
    void exit();
}

namespace Menu {
    void exit();
    void save();
    void resume();
}



#endif //CONSOLE_RPG_NAVIGATION_H
