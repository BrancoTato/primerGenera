#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

// Function to generate prime numbers between m and n
void generatePrimes(int m, int n) {
    vector<int> primes;

    for (int i = m; i <= n; i++) {
        if (isPrime(i))
            primes.push_back(i);
    }

    for (int prime : primes) {
        cout << prime << endl;
    }

    cout << endl; // Empty line to separate test cases
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int m, n;
        cin >> m >> n;
        generatePrimes(m, n);
    }

    return 0;
}
