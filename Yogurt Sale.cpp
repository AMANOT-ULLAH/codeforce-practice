#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int individual_cost = (n % 2) * a;
        int pair_cost = (n / 2) * min(2 * a, b);
        int total_cost = individual_cost + pair_cost;

        cout << total_cost << endl;
    }

    return 0;
}
