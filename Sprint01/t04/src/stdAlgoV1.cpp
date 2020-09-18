#include "header.h"

bool FindSubstring(std::string str, std::string substr) {
    auto it = std::search(str.begin(), str.end(),
                          substr.begin(), substr.end());
    if (it != str.end())
        return true;
    return false;
}

bool containsRich(std::forward_list<std::string>& names) {
    if (std::count_if(names.begin(), names.end(),
            [] (std::string string) {return FindSubstring(string, "rich");}) > 0)
        return true;
    else
        return false;
}

bool nonlength(std::forward_list<std::string>& names) {
    int len = 15;

    if (std::count_if(names.begin(), names.end(),
            [len] (std::string string) {return string.size() == len;}) != 0 || names.begin() == names.end())
        return false;
    else
        return true;
}

bool endVel(std::forward_list<std::string>& names) {
    if (std::count_if(names.begin(), names.end(),
                      [] (std::string str)
                      {
                          std::string vel{"vel"};
                          auto it = std::find_end(str.begin(), str.end(), vel.begin(), vel.end());
                          return std::distance(it, str.end()) == 3;
                      }
    ) != std::distance(names.begin(), names.end()) || names.begin() == names.end())
        return false;
    else
        return true;
}

void withoutMel(std::forward_list<std::string>& names) {
    int amount = std::count_if(names.begin(), names.end(), [] (std::string string)
    {return !FindSubstring(string, "mel");});

    std::cout << "without'mel': " << amount << std::endl;
}

void stdAlgoV1(std::forward_list<std::string>& names) {
    std::cout << "size: " << std::distance(names.begin(), names.end()) << std::endl;
    std::cout << "contains 'rich' : " << (containsRich(names) ? "true" : "false") << std::endl;
    std::cout << "none of lengths is 15: " << (nonlength(names) ? "true" : "false") << std::endl;
    std::cout << "all end with 'vel' : " << (endVel(names) ? "true" : "false") << std::endl;
    withoutMel(names);
}
