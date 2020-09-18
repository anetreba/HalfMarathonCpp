#include "draugr.h"

int getNumber(int ac, char **av) {
    int number = std::stoi(av[1]);

    if ((number < 0) || (number > 8))
        throw 1;
    return number;
}

std::pair<double, int> getNumbers(int argc, char *argv[]) {
    if (argc == 3) {
        double health = std::stod(argv[2]);
        int frost = std::stoi(argv[2]);
        return {health, frost};
    }
    if (argc == 4) {
        double health = std::stod(argv[2]);
        int frost = std::stoi(argv[3]);

        if (frost > 100)
            throw 1;
        return {health, frost};
    }
    return {0,0};
}

void callConstuctor(int ac, int shoutnumber, std::pair <double, int> healthFrost) {
    if (ac == 2) {
        Draugr draugr;
        draugr.shoutPhrase(shoutnumber);
    } else if (ac == 3) {
        Draugr draugr1(healthFrost.first);
        draugr1.shoutPhrase(shoutnumber);
        Draugr draugr2(healthFrost.second);
        draugr2.shoutPhrase(shoutnumber);
    } else if (ac == 4) {
        Draugr draugr(healthFrost.first, healthFrost.second);
        draugr.shoutPhrase(shoutnumber);
    }
}

int main(int ac, char** av) {
    if (ac == 1 || ac > 4) {
        std::cerr << "usage: ./draugr [shoutNumber] [health] [frostResist]" << std::endl;
        return 1;
    }
    int shoutnumber;
    std::pair <double, int> healthFrost;

    try {
        shoutnumber = getNumber(ac, av);
    } catch (...) {
        std::cerr << "Invalid shoutNumber" << std::endl;
        return 1;
    }
    try {
        healthFrost = getNumbers(ac, av);
    } catch (...) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    callConstuctor(ac, shoutnumber, healthFrost);
    return 0;
}
