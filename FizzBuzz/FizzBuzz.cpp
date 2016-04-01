//
//  test.cpp
//  FizzBuzz
//
//  Created by James Burnie on 10/03/2016.
//  Copyright (c) 2016 Andrew Burnie. All rights reserved.
//

#include <stdio.h>
#include "FizzBuzz.h"
#include <string>
using namespace std;


string FizzBuzz::play(int number)
{
    if (number < 0) {
        return "Must be Positive Number";
    }
    
    if (number % 15 == 0)
    {
        return "Fizzbuzz";
    }
    
    if (number % 3 == 0)
    {
        return "Fizz";
    }
    
    if (number % 5 == 0)
    {
        return "Buzz";
    }
    
    return to_string(number);
}
