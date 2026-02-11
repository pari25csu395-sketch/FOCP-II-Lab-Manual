#include <iostream>
using namespace std;

// Function to check prime number
bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a Prime Number.";
    else
        cout << number << " is NOT a Prime Number.";

    return 0;
}

