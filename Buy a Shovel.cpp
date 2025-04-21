#include <iostream>
using namespace std;

int main() {
    long long k, r;
    cin >> k >> r;

    long long n = 0; // Initialize n outside the loop to handle cases where no solution is found

    for (long long i = 1; i <= 9; ++i) {
        if ((k * i) % 10 == r || (k * i) % 10 == 0) {
            n = i;
            break;
        }
    }

    cout << n << endl;

    return 0;
}
