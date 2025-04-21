//GOLD 42

#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i, n) for (int i = 0; i < n; i++)
#define sor(v) sort(v.begin(), v.end())
#define vec vector<int>
#define stk stack<int>
#define que queue<int>
#define pq priority_queue<LSD>
#define mp map<string, int>
#define st set<int>

int main() {
    int t;
    cin >> t;
   while(t--) {
        LSD n;
        cin >> n;
        vec a(n);
        LOL(i, n)
            cin >> a[i];
        bool yes = false;
        st c;
        for (LSD i = n - 1; i >= 0; i--) {
            if (c.count(a[i])) {
                cout << i + 1 << endl;
                yes = true;
                break;
            }
            c.insert(a[i]);
        }
        if (!yes)
            cout << 0 << endl;
    }
}