

#include "Record.h"
#include <iostream>

Record::Record(int turn_nr, CycList<int> n_bet, int nr_drawn, int won, int bank):
turn_nr(turn_nr), bet(n_bet), nr_drawn(nr_drawn), won(won), bank(bank)
{}

std::ostream& operator<<(std::ostream &stream, const Record &record){
    stream << "Numer tury: " << record.turn_nr << " Postawiono: " << record.bet <<
    " Wypadło: " << record.nr_drawn << " Wygrana: " << record.won << " Pozostało środków: " << record.bank;
}
