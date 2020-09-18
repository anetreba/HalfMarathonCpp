#pragma once

#include <iostream>
#include <algorithm>
#include <fstream>
#include <forward_list>
#include <string>

void parseFile(char *filename, std::forward_list<std::string>& names);
void stdAlgoV1(std::forward_list<std::string>& names);
