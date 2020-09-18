#pragma once

#include <iterator>
#include <algorithm>

template<class Container>
void squareValue(Container& container) {
    std::transform(container.begin(), container.end(), container.begin(),
            [](auto &i) {return i * i;});
}

