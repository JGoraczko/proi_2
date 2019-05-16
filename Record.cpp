

#include "Record.h"
#include <iostream>
#include <typeinfo>
Record::Record(int turn_nr, CycList<int> bet, int nr_drawn, int won, int bank):
turn_nr(turn_nr), bet(bet), nr_drawn(nr_drawn), won(won), bank(bank)
{}

int Record::getTurn(){
    return turn_nr;
}

CycList<int> Record::getBet(){
    return bet;
}

std::ostream& operator<<(std::ostream &stream, const Record &record){
    stream << "Numer tury: " << record.turn_nr << " Postawiono: " << record.bet <<
    " Wypadło: " << record.nr_drawn << " Wygrana: " << record.won << " Pozostało środków: " << record.bank;
}
