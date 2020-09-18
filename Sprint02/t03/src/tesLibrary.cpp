#include "header.h"

void valid_file(std::ifstream& file) {
    while (file.peek() == ' ')
        file.ignore(1);
    if (!file || file.peek() == EOF) {
        std::cerr << "error" << std::endl;
        exit(1);
    }
}

void print(std::multimap<std::string,std::string>& multimap) {
    int count;
    std::vector<std::string> names;

    for (auto i : multimap) {
        count = 1;
        if (std::find(names.begin(), names.end(), i.first) == names.end()) {
            std::cout << i.first << ":" << std::endl;
            names.push_back(i.first);
            for (auto j : multimap) {
                if (j.first == i.first) {
                    std::cout << " " << count++ << ": " << j.second << std::endl;
                }
            }
        }
    }
}

void tesLibrary(char* filename) {
    std::ifstream file = std::ifstream{filename};
    std::string tmp;
    std::regex exp("\\s*\"([^\"]+)\"\\s*:\\s*\"([^\"]+)\"\\s*");
    std::multimap <std::string, std::string> multimap;
    std::smatch match;

    valid_file(file);
    for (int i = 1; std::getline(file, tmp); i++) {
        if (!tmp.empty() && std::regex_match(tmp, match, exp) != false) {
            multimap.insert(std::pair<std::string, std::string>(match[1], match[2]));
        } else {
            std::cerr << "Line " << i <<  " is invalid" << std::endl;
            file.close();
            exit(1);
        }
    }
    print(multimap);
}
