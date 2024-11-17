#include <iostream>
using namespace std;

/*
 * Check if a number is prime
 */
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

/*
 * Print all the prime factors of the number
 */
void primeFactors(int n) {
    cout << "Prime factors of " << n << " are:" << endl;

    for (int i = 2; i <= n; i++) {
        while (n % i == 0 && isPrime(i)) {
            cout << i << " ";
            n /= i;
        }
    }

    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << "No prime factors for numbers <= 1." << endl;
    } else {
        primeFactors(num);
    }

    return 0;
}
