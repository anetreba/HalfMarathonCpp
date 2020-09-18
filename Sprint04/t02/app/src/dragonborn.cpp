#include "dragonborn.h"

void Dragonborn::executeAction(const Actions action) {
    static std::map<Actions, void(Dragonborn::*)(void) const> functions {
            {Actions::Shout, &Dragonborn::shoutThuum},
            {Actions::Weapon, &Dragonborn::attackWithWeapon},
            {Actions::Magic, &Dragonborn::attackWithMagic}
    };
    (this->*functions.at(action))();
}

void Dragonborn::shoutThuum() const {
    std::cout << "Yol Toor Shul" << std::endl;
}

void Dragonborn::attackWithMagic() const {
    std::cout << "*attacks with magic spell*" << std::endl;
}

void Dragonborn::attackWithWeapon() const {
    std::cout << "*attacks with weapon*" << std::endl;
}
