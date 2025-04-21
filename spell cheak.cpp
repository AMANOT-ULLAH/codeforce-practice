#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        if (n != 5) {
            cout << "NO" << endl;
        } else {
            sort(s.begin(), s.end());
            string reference = "Timur";
            sort(reference.begin(), reference.end());
            if (s == reference) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
