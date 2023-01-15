//
// Created by Dino on 4 Jan 2023.
//

#ifndef CONSOLE_RPG_POSSIBLEACTIONS_H
#define CONSOLE_RPG_POSSIBLEACTIONS_H

enum class ValidActionMainMenu {quit, play, options};
enum class ValidActionOptions {exit}; // more options later
enum class ValidActionMenu {exit, save, resume};
enum class ValidActionGame{go, run, talk, fight, ignore};
enum class ValidActionBattle {flee, attack, defend, item};

#endif //CONSOLE_RPG_POSSIBLEACTIONS_H
