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
    
    cout << "Below are test results" << endl
    << "Fizzes? " << test.fizzes(3, game.play(3)) << endl
    << "Buzzes? "
    << "FizzBuzzes? "
    << "Otherwise returns integer? " << endl;
    
    cout << "Below is program" << endl;
    cout << "Please give integer: ";
    cin >> integer;
    
    cout << game.play(integer);
    
    return 0;
}
