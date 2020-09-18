#include "header.h"

void parse(string input, vector<string>& args) {
    string delimiter = " ";
    size_t pos = 0;

    if (!input.empty()) {
        while ((pos = input.find(delimiter)) != std::string::npos) {//npos = -1
            if (!input.substr(0, pos).empty())
                args.push_back(input.substr(0, pos));
            input.erase(0, pos + delimiter.length());
        }
        if (!input.empty())
            args.push_back(input);
        if (args.size() > 2) {
            cerr << "Invalid command." << endl;
            args.clear();
        }
    }
}
