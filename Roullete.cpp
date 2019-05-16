
#include "Roullete.h"
#include <iostream>
#include "CycList.h"
#include "Record.h"
#include<chrono>
#include<random>

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
std::default_random_engine generator(seed);


Roullete::Roullete(int starting_bank):
bank(starting_bank), turn_nr(0)
{}

void Roullete::play(CycList<int> bet, int amount){
    std::uniform_int_distribution<int> random_nr(0, 36);
    ++turn_nr;
    int nr_drawn = random_nr(generator);
    int reward = 0;
    for(int i = 0; i < bet.getSize(); ++i) {
        int temp = bet.getData();
        if (temp == nr_drawn)
            reward = reward + (amount * 36 / bet.getSize());
        bet.pop();
        bet.push(temp);
    }
    bank = bank - amount + reward;
    Record temp(turn_nr, bet, nr_drawn, reward, bank);
    history.push(temp);
}

void Roullete::displayHistory() {
    std::cout << history ;
}