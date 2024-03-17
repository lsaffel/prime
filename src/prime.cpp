#include <iostream>
using namespace std;

bool isPrimeNumber(int number);

int main()
{
    // now, return every prime  number between 1 and 1000

    for (int i = 1; i <= 1000; i++) {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
            cout << i << " is a prime number\n";
    }

    return 0;
}

bool isPrimeNumber(int number) {

    // start at 2 and less than number since every number
    // is divisible by 1 and divisible by itself, so
    // no need to check 1 or number

    for(int i = 2; i < number; i++) {
        if(number % i == 0) 
            return false;
    }
    return true;
}