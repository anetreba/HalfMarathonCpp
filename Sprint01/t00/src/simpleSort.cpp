#include "header.h"

void parseArgs(char** av) {
    std::array <std::string, 5> args = {av[1], av[2], av[3], av[4], av[5]};

    std::sort(args.begin(), args.end());
    std::cout << *(args.begin());
    for (auto element = args.begin() + 1; element != args.end(); element++)
        std::cout << " " << *element;
    std::cout << std::endl;
}
