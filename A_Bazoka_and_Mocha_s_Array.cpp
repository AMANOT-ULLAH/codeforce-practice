#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i, n) for (int i = 0; i < n; i++)
#define sor(v) sort(v.begin(), v.end())
#define vec vector<int>


void solve() {
    int n;
    cin >> n;
    vec a(n), b;
    for(auto &it: a)
        cin >> it;
    b = a;
    for(int i=0; i<n; ++i)
        b.push_back(a[i]);
    int cnt = 1;
    for( int i=1; i<2*n; ++i) {
        if(b[i]>=b[i-1])
            cnt++;
        else 
            cnt = 1;
        if(cnt == n) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}