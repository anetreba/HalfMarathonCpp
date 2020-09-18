#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <sstream>

struct City {
    int counter;
    std::string name;
    std::string distance;
    std::string stamina;
};

void insert(int argc, char **argv, std::deque<City>& cityList);
void algorithm(std::deque<City>& cityList);
