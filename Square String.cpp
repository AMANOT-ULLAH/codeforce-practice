#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        
        if (n % 2 != 0) {
            cout << "NO" << endl;
        } else {
            string a = s.substr(0, n/2);
            string b = s.substr(n/2);
            
            if (a == b) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
