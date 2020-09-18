#include "header.h"

int main() {
    std::string input;
//    std::stringstream ss;
    std::map<std::string,std::string> lib;
    std::string command;

    while (true) {
        std::stringstream ss;
        std::cout << "enter command:> ";
        std::getline(std::cin, command);

        ss.str(command);
//        ss << command;
        validCommand(ss, lib);
//        std::cout << command << std::endl;
    }
    return 0;
}
