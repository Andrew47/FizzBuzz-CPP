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

string Tests::fizzes(int input, string output)
{
    if (input == 3 && output == "fizz") {
        return "TRUE";
    }
    return "FALSE";
}

