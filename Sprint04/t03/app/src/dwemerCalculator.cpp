#include "dwemerCalculator.h"

void DwemerCalculator::Add() {
    res = op_pair.first + op_pair.second;
    std::cout << res << std::endl;
}

void DwemerCalculator::Sub() {
    res = op_pair.first - op_pair.second;
    std::cout << res << std::endl;
}

void DwemerCalculator::Div() {
    if (op_pair.second == 0) {
        std::cout << "division by zero" << std::endl;
        return ;
    }
    res = op_pair.first / op_pair.second;
    std::cout << res << std::endl;
}

void DwemerCalculator::Mult() {
    res = op_pair.first * op_pair.second;
    std::cout << res << std::endl;
}

static std::string findOperation(std::string match) {
    if (match.size() == 1)
        return match;
    if (match == "++" || match == "--")
        return std::string("+");
    else
        return std::string("-");
}

void DwemerCalculator::executeAction(const DwemerCalculator::Operation operation) {
    std::map<DwemerCalculator::Operation, void(DwemerCalculator::*)()> func;
    func.insert({DwemerCalculator::Operation::Add, &DwemerCalculator::Add});
    func.insert({DwemerCalculator::Operation::Sub, &DwemerCalculator::Sub});
    func.insert({DwemerCalculator::Operation::Mult, &DwemerCalculator::Mult});
    func.insert({DwemerCalculator::Operation::Div, &DwemerCalculator::Div});
    (this->*func.at(operation))();
}

static int isNumber(std::string str) {
    for (auto i : str) {
        if (!std::isdigit(i))
            return false;
    }
    return true;
}

void DwemerCalculator:: findOperands(int& index, std::smatch& match) {
    std::regex reg("[a-zA-Z]+");
    std::smatch m;

    for (index = 1; index <= 3; index += 2) {
        std::string check = match[index];

        try {
            std::stoi(match[index]);
        }
        catch (...) {
            if (!std::regex_match(check, m, reg)) {
                std::string err = ((index == 1) ? "operand1 " :  "operand2 ");
                std::string err1 = "is out of range";
                throw (err + err1);
            }
        }
        if (isNumber(match[index])) {
            (index == 1) ? op_pair.first = std::stoi(match[index]) : op_pair.second = std::stoi(match[index]);
        }
        else if (std::regex_match(check, m, reg)){
            (index == 1) ? op_pair.first = variable.at(match[index]) : op_pair.second = variable.at(match[index]);
        }
    }
}

void DwemerCalculator::doOperation(std::smatch& match) {
    int index = 0;

    std::map<std::string, DwemerCalculator::Operation> operations = {
            {"+", DwemerCalculator::Operation::Add},
            {"-", DwemerCalculator::Operation::Sub},
            {"*", DwemerCalculator::Operation::Mult},
            {"/", DwemerCalculator::Operation::Div}
    };
    try {
        findOperands(index, match);
        executeAction(operations.at(findOperation(match[2])));
        if (match.size() == 5)
            variable.insert({match[4], this->res});
    }
    catch (std::out_of_range) {
        std::cerr << "invalid ";
        (index == 1) ? std::cerr << "operand1\n" : std::cerr <<"operand2\n";
    }
    catch (const std::string& err) {
        std::cerr << err << std::endl;
    }
}

