//
//  main.cpp
//  FizzBuzz
//
//  Created by James Burnie on 10/03/2016.
//  Copyright (c) 2016 Andrew Burnie. All rights reserved.
//

#include <iostream>
#include "FizzBuzz.h"
#include "tests.h"

using namespace std;

int main() {
    int integer;
    FizzBuzz game;
    Tests test;
    
    cout << "Below are test results: " << endl << endl
    << "1. Fizzes? " << test.test(3) << endl
    << "2. Buzzes? " << test.test(5) << endl
    << "3. FizzBuzzes? " << test.test(15) << endl
    << "4. Otherwise returns integer? " << test.test(7) << endl
    << "5. Rejection of negative numbers? " << test.test(-7) << endl << endl;
    
    cout << "If given number is not an integer, rounded down to nearest integer." << endl << endl
    << "Typing 0 will terminate program" << endl << endl;
    
    cout << "Below is program: " << endl << endl;
    
    do
    {
    
    cout << "Please give integer: ";
    cin >> integer;
    
    cout << game.play(integer) << endl;
    }
    
    while (integer != 0);
    
    return 0;
}
