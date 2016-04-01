//
//  tests.cpp
//  FizzBuzz
//
//  Created by James Burnie on 10/03/2016.
//  Copyright (c) 2016 Andrew Burnie. All rights reserved.
//

#include "tests.h"
#include "FizzBuzz.h"
#include <string>
using namespace std;

FizzBuzz game;

string Tests::test(int input) const
{
    if (input == 3 && game.play(3) == "Fizz") {
        return "TRUE";
    }

    if (input == 5 && game.play(5) == "Buzz") {
        return "TRUE";
    }

    if (input == 15 && game.play(15) == "Fizzbuzz") {
        return "TRUE";
    }
    
    if (input == 7 && game.play(7) == "7") {
        return "TRUE";
    }
    
    if (input == -7 && game.play(-7) == "Must be Positive Number") {
        return "TRUE";
    }
    
    if (input == 0 && game.play(0) == "") {
        return "TRUE";
    }
    
    return "FALSE";
}





