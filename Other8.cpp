#include <iostream>
using namespace std;

void sieve_of_eratosthenes(int n, int* result, int* resultSize) {
    bool* primes = new bool[n + 1];
    for (int i = 0; i <= n; i++) {
        primes[i] = true;
    }
    
    int p = 2;
    while (p * p <= n) {
        if (primes[p]) {
            for (int i = p * p; i <= n; i += p) {
                primes[i] = false;
            }
        }
        p++;
    }
    
    *resultSize = 0;
    for (int p = 2; p <= n; p++) {
        if (primes[p]) {
            result[*resultSize] = p;
            (*resultSize)++;
        }
    }
    
    delete[] primes;
}

// Example usage
int main() {
    int n = 30;
    int result[100];
    int resultSize = 0;
    
    sieve_of_eratosthenes(n, result, &resultSize);
    
    cout << "Prime numbers less than or equal to " << n << ": ";
    for (int i = 0; i < resultSize; i++) {
        if (i > 0) cout << ", ";
        cout << result[i];
    }
    cout << endl;
    
    return 0;
}
