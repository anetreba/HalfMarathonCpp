#include "MightyWizard.h"

MightyWizard::MightyWizard(const std::string& name)
        : AbstractWizard(name) {}

void MightyWizard::checkFood(FoodItem *item) {
    FoodType foodtype = deductFoodType(item);

    if (foodtype == FoodType::Invalid)
        std::cout << "<unknown>. Ugh, not again!" << std::endl;
    else if (foodtype == FoodType::ApplePie || foodtype == FoodType::PoisonedFood)
        std::cout << item->getName() << ". Ugh, not again!" << std::endl;
    else
        std::cout << item->getName() << ". Mmm, tasty!" << std::endl;
}

void MightyWizard::checkFood(FoodItem& item) {
    FoodType foodtype = deductFoodType(&item);

    std::cout << item.getName() << ((foodtype == FoodType::ApplePie || foodtype == FoodType::Invalid
    || foodtype == FoodType::PoisonedFood) ? ". Ugh, not again!" : ". Mmm, tasty!" ) << std::endl;
}

FoodType MightyWizard::deductFoodType(FoodItem *item) {
    return (item == nullptr) ? FoodType::Invalid : item->getType();
}
