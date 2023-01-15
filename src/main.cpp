#include <exception>
#include "Run.h"

int main() {
    try {
        game::run();
    } catch (std::exception& e) {
        return 0;
    }
}
