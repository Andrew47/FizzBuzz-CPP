//
//  tests.h
//  FizzBuzz
//
//  Created by James Burnie on 10/03/2016.
//  Copyright (c) 2016 Andrew Burnie. All rights reserved.
//

#ifndef __FizzBuzz__tests__
#define __FizzBuzz__tests__

#include <stdio.h>
#include <string>
using namespace std;

class Tests
{
public:
    string fizzes (int input, string output);
    string buzzes ();
    string fizzbuzzes ();
    string other_numbers ();
};

#endif /* defined(__FizzBuzz__tests__) */
