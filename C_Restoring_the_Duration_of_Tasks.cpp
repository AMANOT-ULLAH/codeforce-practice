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

int main()
{
    int t;cin>>t;
    while(t--)
    {
       int n;
    cin >> n;
    int s[n];
    int f[n];
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
 
    for (int i = 0; i < n; ++i) {
        cin >> f[i];
    }
    int curTime = 0;
    int d[n];
    for (int i = 0; i < n; ++i) {
        curTime = max(curTime, s[i]);
        d[i] = f[i] - curTime;
        curTime = f[i];
    }
    for (auto now: d) {
        cout << now << " ";
    }
    cout << '\n';
    }
}