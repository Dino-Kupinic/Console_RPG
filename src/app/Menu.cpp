//
// Created by Dino on 8 Jan 2023.
//

#include "Menu.h"
#include "fstream"

namespace game {

    void displayMenu() {

        std::cout << loadTitle();
    }

    std::string loadTitle() {
        std::string title;

        std::string file {"titleASCII.txt"};
        std::ifstream inputStream {file};

        if (!inputStream) {
            throw std::runtime_error("Couldn't open file!");
        }

        std::string line;
        while(std::getline(inputStream, line)) {
            title += line + "\n";
        }
        inputStream.close();

        return title;
    }

}