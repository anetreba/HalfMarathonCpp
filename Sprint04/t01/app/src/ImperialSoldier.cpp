#include "ImperialSoldier.h"

ImperialSoldier::ImperialSoldier() : m_health(100), m_weapon(0) {}

ImperialSoldier::~ImperialSoldier() {
    delete m_weapon;
}

void ImperialSoldier::setWeapon(Sword* weapon) {
    delete m_weapon;
    m_weapon = weapon;
}

void ImperialSoldier::attack(StormcloakSoldier& enemy) {
    int damage = m_weapon->getDamage();

    if (damage > enemy.getHealth())
        damage = enemy.getHealth();
    std::cout << "Imperial soldier attacks and deals " << damage << " damage" << std::endl;
    enemy.consumeDamage(m_weapon->getDamage());
}

void ImperialSoldier::consumeDamage(int amount) {
    m_health -= amount;
    if (m_health < 0) {
        amount += m_health;
        m_health = 0;
    }
    std::cout << "Imperial soldier consumes " << amount << " of damage";
    if (m_health == 0)
        std::cout << " and dies";
    std::cout << std::endl;
}

int ImperialSoldier::getHealth() const {
    return m_health;
}
