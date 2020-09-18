#include <iostream>
using namespace std;

auto checkEndOfStr(char* value, size_t n) {
    if(value[n] != '\0')
        throw 1;
}

auto validArgs(int ac, char **av) {
    auto i = 2;
    auto indx = 0ul;

    try {
        stoi(av[i], &indx);
        checkEndOfStr(av[i], indx);
        stof(av[++i], &indx);
        checkEndOfStr(av[i], indx);
        stod(av[++i], &indx);
        checkEndOfStr(av[i], indx);
    } catch (...) {
        cerr << "Invalid argument: " << av[i] << endl;
        exit(1);
    }
}

int main(int ac, char** av) {
    if (ac != 5) {
        cerr << "usage:./automaton [name] [level] [health] [stamina]" << endl;
        return 1;
    }
    validArgs(ac, av);
    std::cout << "Name = " << av[1] << std::endl;
    std::cout << "Level = " << stoi(av[2]) << std::endl;
    std::cout << "Health = " << stof(av[3]) << std::endl;
    std::cout << "Stamina = " << stod(av[4]) << std::endl;
    return 0;
}
