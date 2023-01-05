//
// Created by Dino on 5 Jan 2023.
//

#ifndef CONSOLE_RPG_ITEM_H
#define CONSOLE_RPG_ITEM_H

#include <iostream>

namespace objects {

    class Item {
        Item()
                : name_(), value_(0)
        {
        }
        Item(std::string_view str, double val)
                : name_(str), value_(val)
        {
        }

        void setName(std::string_view str) { name_ = str; }
        void setValue(double val) { value_ = val; };
        [[nodiscard]] std::string getName() const { return name_; }
        [[nodiscard]] double getValue() const { return value_; }

    private:
        std::string name_;
        double value_;
    };

}


#endif //CONSOLE_RPG_ITEM_H
