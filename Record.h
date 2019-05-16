

#include "CycList.h"
#include <iostream>
#ifndef PROI_2_RECORD_H
#define PROI_2_RECORD_H


class Record{
    int turn_nr;
    CycList<int> bet;
    int nr_drawn;
    int won;
    int bank;

public:
    Record() = default;
    Record(Record&) = default;
    Record(int, CycList<int>, int, int, int);
    ~Record() = default;
    friend std::ostream& operator<<(std::ostream&, const Record&);
};


#endif //PROI_2_RECORD_H
