#include "header.h"

int main(int ac, char** av) {
    if (ac == 1) {
        std::cerr << "usage: ./visitAll [[name,stamina,distance] ...]]" << std::endl;
        return 1;
    }
    std::deque<City> cityList;

    insert(ac, av, cityList);
    algorithm(cityList);
    return 0;
}

