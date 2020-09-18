#include "header.h"

bool findPath(std::deque<City>& cityList, int size) {
    int stamina = 0;

    for (int i = 0; i < size; i++) {
        stamina += std::stoi(cityList[i].stamina);
        if (stamina >= std::stoi(cityList[i].distance))
            stamina -= std::stoi(cityList[i].distance);
        else
            return false;
    }
    return true;
}

void printPath(std::deque<City>& cityList, int size) {
    for (int i = 0; i < size; i++)
        std::cout << cityList[i].counter << ". " << cityList[i].name << std::endl;
}

void algorithm(std::deque<City>& cityList) {
    int size = cityList.size();

    for (int i = 0; i < size; i++) {
        auto begin = *(cityList.begin());

        if (findPath(cityList, size)) {
            printPath(cityList, size);
            return ;
        }
        cityList.pop_front();
        cityList.push_back(begin);
    }
    std::cerr << "Mission: Impossible" << std::endl;
    exit(1);
}
