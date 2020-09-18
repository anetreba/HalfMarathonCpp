#pragma once

#include <list>
#include <algorithm>
#include <iostream>
#include <chrono>
#include <thread>

enum class Gender {
    Male,
    Female
};

struct Rabbit {
    Gender gender;
    bool isVampire;
    int age;
};

struct RabbitVampire :: Rabbit  {
    bool isBornVampire = false;
//    Rabbit rabbit;
    RabbitVampire();
};

RabbitVampire* GenerateRabbit();

void matured(std::list<RabbitVampire*>& rabbits);
void vampirism(std::list<RabbitVampire*>& rabbits);
void death(std::list<RabbitVampire*>& rabbits);
void multiply(std::list<RabbitVampire*>& rabbits);

void createRabbits(std::list<RabbitVampire*>& rabbits);
void algorithm(std::list<RabbitVampire*>& rabbits);
void print(std::list<RabbitVampire*>& rabbits);
