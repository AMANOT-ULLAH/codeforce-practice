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
#define mp map<int, int>
#define st set<int>
#define  U_set_ch unordered_set<char>
#define nl cout << endl;
#define aman                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    aman
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vec vx(n);
        LOL(i,n)cin>>vx[i];
        mp m;
        LOL(i,n)
        {
            int b;cin>>b;
            m[vx[i]]=b;
        }
        sor(vx);
        

        
        LOL(i,n)cout<<vx[i]<<" ";
        nl;
        LOL(i,n)cout<<m[vx[i]]<<" ";
        nl;
    }
}    