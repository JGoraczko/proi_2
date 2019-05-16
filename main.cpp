#include <iostream>
#include "CycList.h"
#include "Record.h"
#include "Roullete.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Lita cykliczna", "[CycList]"){
    CycList<int> list;
    REQUIRE(list.getSize() == 0);
    SECTION("Testowanie metody push"){
        list.push(10);
        REQUIRE(list.getSize() == 1);
        REQUIRE(list.getData() == 10);
    }
    SECTION("Testowanie metody pop"){
        list.push(10);
        list.push(20);
        REQUIRE(list.getSize() == 2);
        REQUIRE(list.getData() == 10);
        list.pop();
        REQUIRE(list.getSize() == 1);
        REQUIRE(list.getData() == 20);
        list.pop();
        REQUIRE(list.getSize() == 0);
    }
}
TEST_CASE("Testowanie klasy Roullete", "[Roullete]"){
    Roullete roullete(1000);
    REQUIRE(roullete.getHistory().getSize() == 0);
    REQUIRE(roullete.getBank() == 1000);
    SECTION("Testowanie metody play"){
        CycList<int> bet;
        bet.push(10);
        roullete.play(bet, 100);
        REQUIRE(roullete.getHistory().getData().getTurn() == 1);
        REQUIRE(roullete.getHistory().getData().getBet().getData() == 10);
    }

}



