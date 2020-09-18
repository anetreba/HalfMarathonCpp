#include "header.h"

void printMove(std::vector <std::string>& names) {
    std::string str;
    for (auto elem = names.begin(); elem != names.end(); elem++) {
        str = *elem;
        std::transform(str.begin(), str.end(), str.begin(),
                       [](unsigned char c){ return std::tolower(c); });
        if (str.find("mercer") != -1 || str.find("emer") != -1 || str.find("jim") != -1) {
            std::cout << *elem << ",  move along!" << std::endl;
        }
        str.clear();
    }
}

void parseArgs(int ac, char** av) {
    std::vector <std::string> names;

    for (int i = 1; i < ac; i++)
        names.push_back(av[i]);
    printMove(names);
}
