#include "header.h"

void parseFile(char *filename, std::forward_list<std::string>& names) {
    std::ifstream file = std::ifstream{filename};

    if (!file || file.peek() == EOF) {
        std::cerr << "error" << std::endl;
        exit(1);
    }
    std::string tmp;
    while(std::getline(file, tmp)) {
        if (!tmp.empty())
            names.push_front(tmp);
    }
}
