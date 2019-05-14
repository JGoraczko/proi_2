

#include "CycList.h"
#include <iostream>
#include <string>
#ifndef PROI_2_RECORD_H
#define PROI_2_RECORD_H


class Record{
    int turn_nr;
    std::string bet;
    int nr_drawn;
    int won;
    int bank;

public:
    Record(int, std::string, int, int, int);
    friend std::ostream& operator<<(std::ostream&, const Record&);
};


#endif //PROI_2_RECORD_H
