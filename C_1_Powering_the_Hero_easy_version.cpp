// GOLD 42

#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i, n) for (LSD i = 0; i < n; i++)
#define sor(v) sort(v.begin(), v.end())
#define vec vector<int>
#define stk stack<int>
#define que queue<int>
#define pq priority_queue<LSD>
#define mp map<char, char>
#define st set<int>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        LSD n;cin>>n;
        LSD a[n];
        LOL(i,n)cin>>a[i];

        pq p;
        LSD i=0,sum=0;
        LOL(i,n)
        {
            if(a[i]!=0) p.push(a[i]);
            else if (p.empty()) continue;
            else 
            {
            sum+=p.top();
            p.pop();
            }
        }
        cout<<sum<<endl;
        
    }
}