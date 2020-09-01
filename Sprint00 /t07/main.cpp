#include "src/header.h"

//void help() {
//    cout << "1. insert <itemType>" << endl;
//    cout << "2. remove <itemType>" << endl;
//    cout << "3. show" << endl;
//    cout << "4. help" << endl;
//    cout << "5. exit" << endl;
//}
//
//void exit() {
//    cout << "Bye" << endl;
//    exit(0);
//}
//
// void remove(vector<string>& args, list<string>& inventory_list) {
//    int flag = 0;
//    for (auto i = inventory_list.begin(), end = inventory_list.end(); i != end; ++i) {
//        if (*i == args[1]) {
//            flag = 1;
//            inventory_list.erase(i);
//            cout << args[1] <<" was removed." << endl;
//            break;
//        }
//    }
//    if (flag == 0)
//        cerr << "Invalid item." << endl;
//}

//void parse(string input, vector<string>& args) {
//    string delimiter = " ";
//    size_t pos = 0;
//
//    if (!input.empty()) {
//        while ((pos = input.find(delimiter)) != std::string::npos) {//npos = -1
//            if (!input.substr(0, pos).empty())
//                args.push_back(input.substr(0, pos));
//            input.erase(0, pos + delimiter.length());
//        }
//        if (!input.empty())
//            args.push_back(input);
//        if (args.size() > 2) {
//            cerr << "Invalid command." << endl;
//            args.clear();
//        }
//    }
//}

//void show(list<string>& inventory_list) {
//    cout << "Inventory {";
//    for (auto i = inventory_list.begin(), end = inventory_list.end(); i != end; ++i)
//        cout << ' ' << *i;
//    for (int i = inventory_list.size(); i != 12; ++i)
//        cout << " -";
//    cout << " }" << endl;
//}
//
//void insert(vector<string>& args, list<string>& inventory_list) {
//    if (args[1] == "w" || args[1] == "f" || args[1] == "a" || args[1] == "p") {
//        if (inventory_list.size() < 12) {
//            inventory_list.push_back(args[1]);
//            cout << args[1] << " was inserted." << endl;
//        }
//        else
//           cerr << "Inventory is full." << endl;
//    }
//    else
//        cerr << "Invalid item." << endl;
//}

//void valid(vector<string>& args, list<string>& inventory_list) {
//    if (args[0] == "help" && args.size() == 1)
//        help();
//    else if (args[0] == "show" && args.size() == 1)
//        show(inventory_list);
//    else if (args[0] == "insert")
//        insert( args, inventory_list);
//    else if (args[0] == "remove")
//        remove(args, inventory_list);
//    else if (args[0] == "exit" && args.size() == 1)
//        exit();
//    else
//        cerr << "Invalid command." << endl;
//}

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

