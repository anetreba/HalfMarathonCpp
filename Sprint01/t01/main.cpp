#include "header.h"

int main(int ac, char** av) {
    if (ac == 1) {
        std::cerr << "usage: ./moveAlong [args]" << std::endl;
        return 1;
    }
    parseArgs(ac, av);
    return 0;
}
