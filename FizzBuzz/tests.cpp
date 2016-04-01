//
//  tests.cpp
//  FizzBuzz
//
//  Created by James Burnie on 10/03/2016.
//  Copyright (c) 2016 Andrew Burnie. All rights reserved.
//

#include "tests.h"
#include <string>
using namespace std;

string Tests::test(int input, string output)
{
    if (input == 3 && output == "Fizz") {
        return "TRUE";
    }

    if (input == 5 && output == "Buzz") {
        return "TRUE";
    }

    if (input == 15 && output == "Fizzbuzz") {
        return "TRUE";
    }
    return "FALSE";
}

string Tests::test(int input, int output)
{
    if (input == 7 && output == 7) {
        return "TRUE";
    }
    
    return "FALSE";
}






