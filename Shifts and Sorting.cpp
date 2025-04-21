
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        long long int ans = 0, flag= 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') 
                flag++;
             else if (flag) 
                ans += (flag + 1);
            }

        cout << ans << endl;
    }
}