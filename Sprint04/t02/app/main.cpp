#include "dragonborn.h"
#include <string>

void dragonborn(char* av) {
    std::string action = av;
    Dragonborn drag;

    if (action == "shout")
        drag.executeAction(Dragonborn::Actions::Shout);
    else if (action == "weapon")
        drag.executeAction(Dragonborn::Actions::Weapon);
    else if (action == "magic")
        drag.executeAction(Dragonborn::Actions::Magic);
    else {
        std::cerr << "Invalid action" << std::endl;
        exit(1);
    }
}

int main(int ac, char** av) {
    if (ac != 2) {
        std::cerr << "usage: ./dragonborn [action]" << std::endl;
        return 1;
    }
    dragonborn(av[1]);
    return 0;
}

