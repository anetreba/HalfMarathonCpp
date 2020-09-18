#include "header.h"

int main(int ac, char** av) {
    if (ac != 2) {
        std::cerr << "usage: ./countUniqueWords [file_name]" << std::endl;
        return 1;
    }
    countUniqueWords(av[1]);
    return 0;
}
