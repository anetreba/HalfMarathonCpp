#pragma once
#include "AbstractWizard.h"
#include "Food/FoodItem.h"
#include <iostream>

class MightyWizard : public AbstractWizard {
public:
    MightyWizard(const std::string& name);
    void checkFood(FoodItem *item);
    void checkFood(FoodItem& item);
protected:
    virtual FoodType deductFoodType(FoodItem *item) override;
};
