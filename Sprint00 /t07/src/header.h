#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

void help();
void exit();
void remove(vector<string>& args, list<string>& inventory_list);
void parse(string input, vector<string>& args);
void show(list<string>& inventory_list);
void insert(vector<string>& args, list<string>& inventory_list);
void valid(vector<string>& args, list<string>& inventory_list);
