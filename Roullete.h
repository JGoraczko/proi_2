

#include <iostream>
#include "CycList.h"
#include "Record.h"
#include <string>

#ifndef PROI_2_ROULLETE_H
#define PROI_2_ROULLETE_H


class Roullete{
public:
    int turn_nr;
    CycList<Record> history;
    int bank;
public:
    Roullete(int starting_bank);
    void play(CycList<int> bet, int amount);
    void displayHistory();

};


#endif //PROI_2_ROULLETE_H
