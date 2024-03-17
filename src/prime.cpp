#include <iostream>
using namespace std;

bool isPrimeNumber(int number);

int main()
{
    int number;
    cout << "Number: ";
    cin >> number;
    bool isPrimeFlag = isPrimeNumber(number);

    if(isPrimeFlag) 
        cout << "Prime number" << endl;
    else
        cout << "Not a prime number" << endl;

    return 0;
}

bool isPrimeNumber(int number) {

    // start at 2 and less than number since every number
    // is divisible by 1 and divisible by itself, so
    // no need to check 1 or number
    for(int i = 2; i < number; i++) {
        if(number % i == 0) {
            cout << "The first number it is divisible by is: " << i << endl;
            return false;
        }
    }
    return true;
}