//
// Created by Dino on 4 Jan 2023.
//

#ifndef CONSOLE_RPG_ACTIONS_H
#define CONSOLE_RPG_ACTIONS_H

enum class ValidActionMainMenu {quit, play, options, credits};
enum class ValidActionOptions {exit}; // more options later
enum class ValidActionMenu {exit, save, resume};
enum class ValidActionMapMovement {};
enum class ValidActionMapObjects {};
enum class ValidActionBattle {flee, attack, defend, item};

#endif //CONSOLE_RPG_ACTIONS_H
