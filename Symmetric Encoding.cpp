// GOLD 42

#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i, n) for (LSD i = 0; i < n; i++)
#define sor(v) sort(v.begin(), v.end())
#define vec vector<int>
#define stk stack<int>
#define que queue<int>
#define pq priority_queue<int>
#define mp map<char, char>
#define st set<int>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        LSD n;
        cin >> n;
        string s, y;
        cin >> s;
        set<char> xx;
        for (auto i : s)
            xx.insert(i); 

        for (auto a : xx)
            y += a;

        mp mal;
        LOL(i, y.size())
        mal[y[i]] = y[y.size() - i - 1];

        LOL(i, n) cout << mal[s[i]];
        
        cout << endl;
    }
}

//thanks_44