#pragma once

#include <string>
#include <iostream>
#include <utility>
#include <map>
#include <regex>

#define validline1 "^[[:blank:]]*([a-zA-Z0-9]+)[[:blank:]]*([\\+\\-\\*\\/]{1,2})[[:blank:]]*([a-zA-Z0-9]+)[[:blank:]]*$"
#define validline2 "^[[:blank:]]*([a-zA-Z0-9]+)[[:blank:]]*([\\+\\-\\*\\/]{1,2})[[:blank:]]*([a-zA-Z0-9]+)[[:blank:]]*\\=[[:blank:]]*([a-zA-Z0-9]+)[[:blank:]]*$"


class DwemerCalculator {
    public:
        std::pair<int, int> op_pair;
        int res;
        enum class Operation {
            Add,
            Sub,
            Mult,
            Div
        };
    void doOperation(std::smatch& args);
    void findOperands(int& index, std::smatch& match);
    void executeAction(const DwemerCalculator::Operation operation);
    private:
        void Add();
        void Sub();
        void Div();
        void Mult();
        const std::map<std::string, void(DwemerCalculator::*)(std::pair<int, int>& op_pair, int& res)> functions;
        std::map<std::string, int> variable;
};
