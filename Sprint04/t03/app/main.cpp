#include "dwemerCalculator.h"
#include "src/dwemerCalculator.h"
#include <regex>
#include <iostream>

void validInputandParse(std::string& input, DwemerCalculator& dwemerCalculator) {
    std::regex reg1(validline1);
    std::regex reg2(validline2);
    std::smatch match;

    if (input == "quit")
        exit(0);
    if (!std::regex_match(input, match, reg1) && !std::regex_match(input, match, reg2)) {
        std::cerr << "invalid input" << std::endl;
        return ;
    }
    dwemerCalculator.doOperation(match);
}

int main() {
    std::string input;
    DwemerCalculator dwemerCalculator;

    while(true) {
        std::cout << ":>";
        std::getline(std::cin, input);
        validInputandParse(input,  dwemerCalculator);
    }
}
