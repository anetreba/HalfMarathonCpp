#pragma once
#include <string>
#include "FoodType.h"

class FoodItem {
protected:
    FoodType m_foodType;
    std::string m_name;
public:
    FoodItem();

    FoodItem(FoodType foodtype);

    FoodType getType() const;
    std::string getName() const;
};
