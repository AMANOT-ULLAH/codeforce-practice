#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i, n) for (LSD i = 0; i < n; i++)
#define sor(v) sort(v.begin(), v.end())
#define vec vector<LSD>
#define stk stack<int>
#define que queue<int>
#define pq priority_queue<LSD>
#define mp map<string, int>
#define st set<int>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        LSD n,q;
        cin>>n>>q;
        vec vt (n+1,0);
        for(LSD i=1;i<=n;i++)
        cin>>vt[i];
         
        vec pref(n+1,0);
        for(LSD i=1;i<=n;i++)
        {
            pref[i]=pref[i-1]+vt[i];
        }

        while(q--)
        {
            LSD l,r,k;
            cin>>l>>r>>k;
            LSD sum=pref[n];
            sum-=(pref[r]-pref[l-1]);
            sum+=(r-l+1)*k;
            if(sum%2==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
}