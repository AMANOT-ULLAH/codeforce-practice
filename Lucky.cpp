#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string ticket;
        cin >> ticket;

        int first_three_sum = 0;
        int last_three_sum = 0;

        for (int j = 0; j < 3; ++j) {
            first_three_sum += ticket[j] - '0';
        }

        
        for (int j = 3; j < 6; ++j) {
            last_three_sum += ticket[j] - '0';
        }

        if (first_three_sum == last_three_sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
