#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1000005; // Adjust this according to the maximum value of n

bool isTPrime(long long int n, const vector<int>& primes) {
    if (n <= 3) return false; // 1 and 3 are not T-prime
    
    long long int root = sqrt(n);
    if (root * root != n) return false; // not a perfect square

    for (int prime : primes) {
        if (prime * prime > root) break; // Stop if prime^2 exceeds root

        if (root % prime == 0) return false; // root is divisible by prime
    }

    return true;
}

vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) primes.push_back(i);
    }

    return primes;
}

int main() {
    int n;
    cin >> n;
    
    // Precompute primes up to the square root of the maximum input value
    int maxInput = 1000000; // Adjust this according to the maximum value of xi
    vector<int> primes = sieve(sqrt(maxInput) + 1);

    while (n--) {
        long long int a;
        cin >> a;

        if (isTPrime(a, primes)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}