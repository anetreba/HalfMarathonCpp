#pragma once

#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <string>

template<class T>
T sumFileData(const std::string& fileName) {
    std::ifstream file(fileName);

    return std::accumulate(std::istream_iterator<T>(file), {}, T{0});
}
