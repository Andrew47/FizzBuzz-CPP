#include <stdio.h>
#include "FizzBuzz.h"
#include <string>
using namespace std;


string FizzBuzz::play(int number) const
{
    if (number == 0)
    {
        return "";
    }
    
    if (number < 0)
    {
        return "Must be Positive Number";
    }
    
    if (isDivisibleBy(number, 15))
    {
        return "Fizzbuzz";
    }
    
    if (isDivisibleBy(number, 3))
    {
        return "Fizz";
    }
    
    if (isDivisibleBy(number, 5))
    {
        return "Buzz";
    }
    
    return to_string(number);
}

bool FizzBuzz::isDivisibleBy(int number, int divisor) const
{
    return number % divisor == 0;
}
