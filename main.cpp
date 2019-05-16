#include <iostream>
#include "CycList.h"
#include "Record.h"
#include "Roullete.h"

int main() {
  //  CycList<Record> test;
    CycList<int> bet1;
    bet1.push(12);
    bet1.push(11);
    bet1.push(13);

    CycList<int> bet2(bet1);
    bet2.push(2);


  //  Record data1(1, bet1, 5, 0, 200);
  //  Record data2(2, bet2, 3, 14, 200);
   // test.push(data1);

  //  test.push(data2);

   // std::cout << test << std::endl;


    Roullete roullete(10000);
    for(int i = 0; i< 100; ++i)
        roullete.play(bet1, 100);
    roullete.displayHistory();
    return 0;
}