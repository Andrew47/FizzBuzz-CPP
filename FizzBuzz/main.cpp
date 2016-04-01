#include <iostream>
#include "FizzBuzz.h"
#include "tests.h"

using namespace std;

int main() {
    int integer;
    FizzBuzz game;
    Tests test;
    string response;
    
    cout << "Display test results?" << endl;
    cin >> response;
    cout << endl;
    
    if (response[0] == 'Y' || response[0] == 'y')
    {
        cout << "Below are the test results: " << endl << endl
             << "1. Fizzes? " << test.test(3) << endl
             << "2. Buzzes? " << test.test(5) << endl
             << "3. FizzBuzzes? " << test.test(15) << endl
             << "4. Otherwise returns integer? " << test.test(7) << endl
             << "5. Rejection of negative numbers? " << test.test(-7) << endl
             << "6. Nothing returned with 0? " << test.test(0) << endl << endl;
    }
    
    cout << "Continue?" << endl;
    cin >> response;
    cout << endl;
    
    if (response[0] == 'Y' || response[0] == 'y')
    {
        cout << "Program Guidance: " << endl << endl
             << "1. Must give a number not text" << endl
             << "2. Decimals rounded down to the nearest integer" << endl
             << "3. Negative numbers not permitted" << endl
             << "4. Typing 0 will terminate the program" << endl << endl;
        
        cout << "Below is the program: " << endl << endl;
    
    do
    {
        cout << "Please give an integer: ";
        cin >> integer;
        cout << game.play(integer) << endl;
    }
    
    while (integer != 0);
    
    }
    
    return 0;
}
