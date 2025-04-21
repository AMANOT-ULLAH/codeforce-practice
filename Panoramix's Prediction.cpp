#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}

int nextPrime(int n) {
    //if (n <= 1) return 2;

    int prime = n;
    bool found = false;

    while (!found) {
        prime++;
        if (isPrime(prime)) {
            found = true;
        }
    }

    return prime;
}

int main() {
    int n,m;
   
    cin >> n>>m;

    int next_prime = nextPrime(n);
    if(next_prime==m)cout<<"YES";
   else cout<<"NO";
    
}
