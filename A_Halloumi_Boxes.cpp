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
        int n,k;cin>>n>>k;
        vec vx(n),xx(n);
        LOL(i,n)cin>>vx[i];
        
        xx=vx;

        sor(xx);

        if(k>1)cout<<"YES"<<endl;
        else if(k==1&&xx==vx)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
        
    }
}
