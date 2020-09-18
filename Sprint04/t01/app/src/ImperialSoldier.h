#pragma once

#include "Sword.h"
#include "StormcloakSoldier.h"
#include <iostream>

class StormcloakSoldier;

class ImperialSoldier final {
    public:
        ImperialSoldier();
        ~ImperialSoldier();
        void setWeapon(Sword* weapon);
        void attack(StormcloakSoldier& enemy);
        void consumeDamage(int amount);
        int getHealth() const;
    private:
        Sword* m_weapon;
        int m_health;
};

