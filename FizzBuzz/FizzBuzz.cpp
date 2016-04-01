//
//  test.cpp
//  FizzBuzz
//
//  Created by James Burnie on 10/03/2016.
//  Copyright (c) 2016 Andrew Burnie. All rights reserved.
//

#include <stdio.h>
#include "FizzBuzz.h"


string FizzBuzz::play(int number)
{
    if (number == 3)
    {
        return "Fizz";
    }
    
    if (number == 5)
    {
        return "Buzz";
    }
    
    if (number == 15)
    {
        return "Fizzbuzz";
    }
    
    return "hello";
}
