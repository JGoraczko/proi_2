
#include "Roullete.h"
#include <iostream>
#include "CycList.h"
#include "Record.h"
#include <string>
#include<chrono>
#include<random>

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
std::default_random_engine generator(seed);


Roullete::Roullete(int starting_bank):
bank(starting_bank)
{}

void Roullete::play(int bet, int amount){
    std::uniform_int_distribution<int> random_nr(0, 36);
    int nr_drawn = random_nr(generator);
    if(bet <= 36 && bet >= 1)
        if(bet == nr_drawn)
        {

        }

}