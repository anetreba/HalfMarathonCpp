#pragma once

#include "Axe.h"
#include "ImperialSoldier.h"
#include <iostream>

class ImperialSoldier;

class StormcloakSoldier final {
    public:
        StormcloakSoldier();
        ~StormcloakSoldier();
        void setWeapon(Axe* weapon);
        void attack(ImperialSoldier& enemy);
        void consumeDamage(int amount);
        int getHealth() const;
    private:
        Axe* m_weapon;
        int m_health;
};
