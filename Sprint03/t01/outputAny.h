#pragma once

#include <iostream>

template <class Container>
void outputAny(const Container& c) {
    for (auto& item : c)
        std::cout << item << std::endl;
}
