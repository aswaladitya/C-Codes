#include <iostream>
using namespace std;

/*
 * Complete the function 'verifyPrime'
 * @params
 *   n -> number which is to be checked for primality test
 *
 * @return
 *   true if the number is a prime number else false
 */
bool verifyPrime(int n) {
    if (n <= 1) {
        return false; // Numbers <= 1 are not prime
    }

    for (int i = 2; i * i <= n; i++) { // Check divisors up to √n
        if (n % i == 0) {
            return false; // Found a divisor, not a prime
        }
    }

    return true; // No divisors found, it's prime
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (verifyPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
