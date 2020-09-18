#include "header.h"

bool isNum(std::string str) {
    if (str.size() == 0)
        return true;
    for (int i = 0; i < str.size(); i++)
        if (std::isdigit(str[i]) == false)
            return true;
    return false;
}

bool isStr(std::string str) {
    if (str.size() == 0)
        return true;
    for (int i = 0; i < str.size(); i++)
        if (std::isalpha(str[i]) == false && str[i] != ' ')
            return true;
    return false;
}

City create(char *str, int counter) {
    std::string temp;
    std::vector<std::string> pars;
    std::stringstream ss;
    City city;
    ss << str;

    while (std::getline(ss, temp, ','))
        pars.push_back(temp);
    try {
        if (isStr(pars[0]))
            throw false;
        if (isNum(pars[1]))
            throw false;
        if (isNum(pars[2]))
            throw false;
    }
    catch (...) {
        std::cout << "Argument " << str << " is not valid" << std::endl;
        exit(1);
    }
    city.name = pars[0];
    city.stamina = pars[1];
    city.distance = pars[2];
    city.counter = counter;
    return city;
}


void insert(int argc, char **argv, std::deque<City>& cityList) {
    for (int i = 1; i < argc; i++)
        cityList.push_back(create(argv[i], i - 1));
}
