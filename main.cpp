#include <iostream>
#include "CycList.h"

int main() {
    CycList<int> test;
    test.push(20);
    test.push(10);
    test.push(20);
    test.push(1111);


    //int x = test.getHead();

    std::cout << test <<std::endl;
    return 0;
}