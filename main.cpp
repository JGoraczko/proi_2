#include <iostream>
#include "CycList.h"
int main() {
    CycList<int> test;
    int* x = test.getHead();

    std::cout << x << std::endl;
    return 0;
}