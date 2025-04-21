#include<bits/stdc++.h>
using namespace std;

int summ(int n) {
    return n*(n+1)/2;
}

int main() {
    int n;
    cin >> n;
    int sum = 0, i = 1;
    while (true) {
        sum += summ(i);
        if (sum > n) {
            cout << i - 1;
            break;
        }
        i++;
    }
    return 0;
}
