#include <iostream>
#include "CycList.h"
#include "Record.h"
#include <string>

int main() {
    CycList<Record> test;
    Record data1(1, "12", 5, 0, 200);
    Record data2(2, "12", 3, 14, 200);
    test.push(data1);

    test.push(data2);




    std::cout << test <<std::endl;
    return 0;
}