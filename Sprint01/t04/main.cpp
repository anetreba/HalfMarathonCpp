#include "header.h"

int main(int ac, char** av) {
    if (ac != 2) {
        std::cerr << "usage: ./stdAlgoV1 [file_name]" << std::endl;
        return 1;
    }
    std::forward_list<std::string> names;

    parseFile(av[1], names);
    stdAlgoV1(names);
}
