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
    << "Fizzes? " << test.test(3) << endl
    << "Buzzes? " << test.test(5) << endl
    << "FizzBuzzes? " << test.test(15) << endl
    << "Otherwise returns integer? " << test.test(7) << endl
    << "Rejection of negative numbers? " << test.test(-7) << endl << endl;
    
    cout << "Note: If given number is not an integer, rounded down to nearest" << endl << endl;
    
    cout << "Below is program: " << endl << endl;
    cout << "Please give integer: ";
    cin >> integer;
    
    cout << game.play(integer);
    
    return 0;
}
