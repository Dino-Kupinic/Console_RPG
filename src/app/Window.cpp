//
// Created by Dino on 9 Jan 2023.
//

#include "Window.h"

namespace game {

    void adjustConsoleWindow() {
        SetConsoleTitle("Console RPG by Dino Kupinic");

        HWND hwnd = GetConsoleWindow();
        RECT rect = {100, 100, 1000, 800};
        MoveWindow(hwnd, rect.left, rect.top, rect.right-rect.left, rect.bottom-rect.top,TRUE);
    }

}