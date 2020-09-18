#include "referenceOrPointter.h"
#include <iostream>

void multiplyByPointer(int* ptr, int mult) {
    if (ptr)
        *ptr *= mult;
}

void multiplyByReference(int& ref, int mult) {
    ref *= mult;
}
