#pragma once

#include <iostream>
#include <algorithm>
#include <fstream>
#include <forward_list>
#include <string>
#include <sstream>

void parseFile(char *filename, std::forward_list<std::string>& names);
void stdAlgoV2(std::forward_list<std::string>& names, std::string& new_file);
std::string createNameNewFile(const std::string& str);
