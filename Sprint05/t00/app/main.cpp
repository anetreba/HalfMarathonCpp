#include "draugr.h"

int main(int ac, char** av) {
    if (ac != 2) {
        std::cerr << "usage: ./draugr [shoutNumber]" << std::endl;
        return 1;
    }
    Draugr draugr;

    try {
        int shoutnumber = std::stoi(av[1]);
        draugr.shoutPhrase(shoutnumber);
    }
    catch (...) {
        std::cerr << "Invalid shoutNumber" << std::endl;
        return 1;
    }
    return 0;
}
