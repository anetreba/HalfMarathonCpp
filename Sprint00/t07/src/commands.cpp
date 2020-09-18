#include "header.h"

void help() {
    cout << "1. insert <itemType>" << endl;
    cout << "2. remove <itemType>" << endl;
    cout << "3. show" << endl;
    cout << "4. help" << endl;
    cout << "5. exit" << endl;
}

void exit() {
    cout << "Bye" << endl;
    exit(0);
}

void remove(vector<string>& args, list<string>& inventory_list) {
    int flag = 0;
    for (auto i = inventory_list.begin(), end = inventory_list.end(); i != end; ++i) {
        if (*i == args[1]) {
            flag = 1;
            inventory_list.erase(i);
            cout << args[1] <<" was removed." << endl;
            break;
        }
    }
    if (flag == 0)
        cerr << "Invalid item." << endl;
}

void show(list<string>& inventory_list) {
    cout << "Inventory {";
    for (auto i = inventory_list.begin(), end = inventory_list.end(); i != end; ++i)
        cout << ' ' << *i;
    for (int i = inventory_list.size(); i != 12; ++i)
        cout << " -";
    cout << " }" << endl;
}

void insert(vector<string>& args, list<string>& inventory_list) {
    if (args[1] == "w" || args[1] == "f" || args[1] == "a" || args[1] == "p") {
        if (inventory_list.size() < 12) {
            inventory_list.push_back(args[1]);
            cout << args[1] << " was inserted." << endl;
        }
        else
            cerr << "Inventory is full." << endl;
    }
    else
        cerr << "Invalid item." << endl;
}
