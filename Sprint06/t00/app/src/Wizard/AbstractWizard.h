#pragma once
#include <string>
#include "Food/FoodType.h"
#include "Food/FoodItem.h"

class AbstractWizard {
public:
    AbstractWizard(const std::string& name);
protected:
    virtual FoodType deductFoodType(FoodItem *item) = 0;
    std::string m_name;
};
