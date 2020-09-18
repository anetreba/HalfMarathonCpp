#include "header.h"

void vampirism(std::list<RabbitVampire*>& rabbits) {
    int vampCnt = 0;
    auto j = rabbits.begin();

    vampCnt = std::count_if(rabbits.begin(), rabbits.end(), [](RabbitVampire* r) {
        return (*r).isBornVampire;
    });
    for (; j != rabbits.end(); j++) {
        if (vampCnt > 0) {
            if (!(*j)->isVampire) {
                (*j)->isVampire = true;
                vampCnt--;
            }
        }
        else {
            break;
        }
    }
}

void matured(std::list<RabbitVampire*>& rabbits) {
    auto j = rabbits.begin();

    for (; j != rabbits.end(); j++) {
        (*j)->age++;
    }
}

void multiply(std::list<RabbitVampire*>& rabbits) {
    int countMale = 0;
    int countFemale = 0;

    countMale = std::count_if(rabbits.begin(), rabbits.end(), [](Rabbit* r) {
        return (*r).gender == Gender::Male && (*r).isVampire != true;
    });
    countFemale = std::count_if(rabbits.begin(), rabbits.end(), [](Rabbit* r) {
        return (*r).gender == Gender::Female && (*r).isVampire != true;
    });
    countMale = std::min(countMale, countFemale);
    for (int i = 0; i < countMale; i++) {
        rabbits.push_back(GenerateRabbit());
    }
}

void death(std::list<RabbitVampire*>& rabbits) {
    auto it = rabbits.begin();

    for (; it != rabbits.end(); it++) {
        if (((*it)->isVampire && (*it)->age > 8)
            || (!(*it)->isVampire && (*it)->age > 3)) {
            delete *it;
            rabbits.erase(it);
        }
    }
}


void print(std::list<RabbitVampire*>& rabbits) {
    int countMale = 0;
    int countFemale = 0;
    int countVampire = 0;

    countMale = std::count_if(rabbits.begin(), rabbits.end(), [](RabbitVampire* r) {
        return (*r).gender == Gender::Male;
    });
    countFemale = std::count_if(rabbits.begin(), rabbits.end(), [](RabbitVampire* r) {
        return (*r).gender == Gender::Female;
    });
    countVampire = std::count_if(rabbits.begin(), rabbits.end(), [](RabbitVampire* r) {
        return (*r).isVampire;
    });
    std::cout << "Males: " << countMale << std::endl;
    std::cout << "Females: " << countFemale << std::endl;
    std::cout << "Vampires: " << countVampire << std::endl;
    std::cout << std::endl;
}

RabbitVampire::RabbitVampire() {
    gender = static_cast<Gender>(rand() % 2);
    isVampire = rand() % 100 == 42;
    if (isVampire)
        isBornVampire = true;
    age = 0;
}

RabbitVampire GenerateRabbit() {
    RabbitVampire newRabbit;

    newRabbit.rabbit.gender = static_cast<Gender>(rand() % 2);
    newRabbit.rabbit.isVampire = isVampire = rand() % 100 == 42;
    if (newRabbit.rabbit.isVampire)
        isBornVampire = true;
    newRabbit.rabbit.age = 0;
    return newRabbit;
}

void createRabbits(std::list<RabbitVampire>& rabbits) {
    for (int i = 0; i < 10; i++)
        rabbits.push_back(GenerateRabbit());
}
