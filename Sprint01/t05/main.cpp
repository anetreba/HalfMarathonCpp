#include "header.h"

int main(int ac, char** av) {
    if (ac != 2) {
        std::cerr << "usage: ./stdAlgoV2 [file_name]" << std::endl;
        return 1;
    }
    std::forward_list<std::string> names;

    parseFile(av[1], names);
    std::string new_file = createNameNewFile(av[1]);
    stdAlgoV2(names, new_file);
    return 0;
}
