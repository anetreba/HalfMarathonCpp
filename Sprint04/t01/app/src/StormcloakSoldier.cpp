#include "StormcloakSoldier.h"

StormcloakSoldier::StormcloakSoldier() : m_health(100), m_weapon(0) {}

StormcloakSoldier::~StormcloakSoldier() {
    delete m_weapon;
}

void StormcloakSoldier::setWeapon(Axe* weapon) {
    delete m_weapon;
    m_weapon = weapon;
}

void StormcloakSoldier::attack(ImperialSoldier& enemy) {
    int damage = m_weapon->getDamage();

    if (damage > enemy.getHealth())
        damage = enemy.getHealth();
    std::cout << "Stormcloak soldier attacks and deals " << damage << " damage" << std::endl;
    enemy.consumeDamage(m_weapon->getDamage());
}

void StormcloakSoldier::consumeDamage(int amount) {
    m_health -= amount;
    if (m_health < 0) {
        amount += m_health;
        m_health = 0;
    }
    std::cout << "Stormcloak soldier consumes " << amount << " of damage";
    if (m_health == 0)
        std::cout << " and dies";
    std::cout << std::endl;
}

int StormcloakSoldier::getHealth() const {
    return m_health;
}
