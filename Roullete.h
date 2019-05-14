

#include <iostream>
#include "CycList.h"
#include "Record.h"
#include <string>

#ifndef PROI_2_ROULLETE_H
#define PROI_2_ROULLETE_H


class Roullete{
    int turn_nr;
    CycList<Record> history;
    int bank;
public:
    Roullete(int starting_bank);
    void play(int bet, int amount);

};


#endif //PROI_2_ROULLETE_H
