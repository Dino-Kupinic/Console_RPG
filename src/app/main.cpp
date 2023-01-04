#include <iostream>

#include "user_io/Command.h"

int main() {
    std::cout << "Hello, World!" << std::endl;


    user_io::Command command {};
    std::cout << command.getAction();


    return 0;
}
