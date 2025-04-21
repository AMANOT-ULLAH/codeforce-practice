// GOLD 42

#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i, n) for (int i = 0; i < n; i++)
#define sor(v) sort(v.begin(), v.end())
#define vec vector<LSD>
#define stk stack<int>
#define que queue<int>
#define pq priority_queue<LSD>
#define mp map<string, int>
#define st set<int>

int maxi(LSD a, LSD b, LSD c)
{
    vec xx = {a, b, c};
    sort(xx.begin(), xx.end());
    return xx[1];
}

int main()
{
    LSD t; cin >> t;
    while (t--)
    {
        LSD n; cin >> n;
        LSD a[n];
        LOL(i, n) cin >> a[i];

        LSD max = 0;
        if (n < 3)
        {
            sort(a, a + n);
            cout << a[0] << endl;
        }
        else
        {
            LOL(i, n - 2)
            {
                LSD mx = maxi(a[i], a[i + 1], a[i + 2]);
                if (max < mx)
                    max = mx;
            }
            cout << max << endl;
        }
    }
}














//thnks 44