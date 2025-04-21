#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i, n) for (LSD i = 0; i < n; i++)
#define sor(v) sort(v.begin(), v.end())
#define vec vector<LSD>
#define delete(vec, k) vec.erase(remove(vec.begin(), vec.end(), k), vec.end());
#define stk stack<int>
#define que queue<int>
#define pq priority_queue<LSD>
#define mp map<string, int>
#define st set<int>
#define nl cout << endl;
#define aman                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    aman int t;
    cin >> t;
    while (t--)
    {
        LSD n;cin>>n;
        vec v(n);
        LOL(i,n)cin>>v[i];
        sor(v);
        cout<<v[n-1]+v[n-2]-v[0]-v[1]<<endl;
    }
}