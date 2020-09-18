#pragma once

#include <iterator>
#include <algorithm>

template <class RandomAccessIterator>
RandomAccessIterator sortValues(RandomAccessIterator begin, RandomAccessIterator end) {
    int i = 0;
    auto item = begin;

    end--;
    while (item != end) {
        if (*item > *(item + 1)) {
            auto tmp = *item;
            *item = *(item + 1);
            *(item + 1) = tmp;
        }
        item++;
        if (item == end) {
            item = begin;
            end--;
        }
    }
    return begin;
}
