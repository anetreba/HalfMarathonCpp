#include "FoodItem.h"

FoodItem::FoodItem() : m_foodType(FoodType::Invalid) {
    m_name = "<unknown>";
}

FoodItem::FoodItem(FoodType foodtype)
        : m_foodType(foodtype) {
    if (foodtype == FoodType::ApplePie)
        m_name = "Apple pie";
    else if (foodtype == FoodType::HoneyNut)
        m_name = "Honey nut";
    else if (foodtype == FoodType::PoisonedFood)
        m_name = "Poison";
    else if (foodtype == FoodType::SweetRoll)
        m_name = "SweetRoll";
    else
        m_name = "<unknown>";
}

FoodType FoodItem::getType() const {
    return m_foodType;
}

std::string FoodItem::getName() const {
    return m_name;
}
