#include "header.h"

void valid(vector<string>& args, list<string>& inventory_list) {
    if (args[0] == "help" && args.size() == 1)
        help();
    else if (args[0] == "insert")
        insert( args, inventory_list);
    else if (args[0] == "remove")
        remove(args, inventory_list);
    else if (args[0] == "show" && args.size() == 1)
        show(inventory_list);
    else if (args[0] == "exit" && args.size() == 1)
        exit();
    else
        cerr << "Invalid command." << endl;
}
