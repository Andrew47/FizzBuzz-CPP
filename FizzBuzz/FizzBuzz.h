#ifndef FizzBuzz_FizzBuzz_h
#define FizzBuzz_FizzBuzz_h

#include <string>

using namespace std;


class FizzBuzz
{
public:
    string play(int number) const;
private:
    bool isDivisibleBy(int number, int divisor) const;
};


#endif
