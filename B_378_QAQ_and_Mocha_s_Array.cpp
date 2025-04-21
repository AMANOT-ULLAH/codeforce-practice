#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i, n) for (int i = 0; i < n; i++)
#define sor(v) sort(v.begin(), v.end())
#define vec vector<int>

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vec a(n);
        LOL(i, n)
            cin >> a[i];

        sor(a);

        vec b;
        b.push_back(a[0]);

        for (int i = 1; i < n; i++) {
            if (a[i] % a[0] != 0) {
                b.push_back(a[i]);
            }
        }

        if (b.size() == 1) {
            cout << "Yes" << endl;
            continue;
        }

        vec c;
        c.push_back(b[0]);
        c.push_back(b[1]);

        for (int i = 2; i < b.size(); i++) {
            if (b[i] % b[1] != 0) {
                c.push_back(b[i]);
            }
        }

        if (c.size() == 2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
