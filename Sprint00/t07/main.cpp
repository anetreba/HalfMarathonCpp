#include "src/header.h"

int main() {
    string input;
    vector <string> args;
    list <string> list;

    while (1) {
        std::cout << "Enter command:> ";
        getline (cin, input, '\n');
        parse(input, args);
        if(!args.empty()) {
            valid(args, list);
            args.clear();
        }
    }
}

