#include "header.h"

int main(int ac, char** av) {
    if (ac != 2) {
        std::cerr << "usage: ./tesLibrary [file_name]" << std::endl;
        return 1;
    }
    tesLibrary(av[1]);
    return 0;
}
