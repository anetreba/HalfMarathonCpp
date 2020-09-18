#include "header.h"

std::string createNameNewFile(const std::string& str) {
    std::stringstream ss(str);
    std::string temp;
    std::string newFile;
    getline(ss, newFile, '.');
    newFile += "_mod";
    getline(ss, temp);
    if (temp.size() != 0)
        newFile += ".";
    newFile += temp;
    return newFile;
}

void remove(std::forward_list<std::string>& names) {
    auto item = std::remove_if(names.begin(), names.end(),
                             [] (std::string str) {
                                 return str.find('c') != std::string::npos
                                        || str.find('b') != std::string::npos
                                        || str.find('l') != std::string::npos;
                             });

    names.erase_after(item);
    int size = std::distance(names.begin(), item);

    names.resize(size);
}

void replace(std::forward_list<std::string>& names) {
    for (auto& item : names) {
        if (item.size() > 10)
            item = "Long one";
        if (item.size() < 4)
            item = "Short one";
    }
}

void stdAlgoV2(std::forward_list<std::string>& names, std::string& new_file) {
    remove(names);
    replace(names);
    names.unique();
//    names.reverse();
    std::ofstream out(new_file);

    for (auto& item : names)
        out << item << std::endl;
}
