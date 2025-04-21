#include<bits/stdc++.h>
#define lld long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<int,int>mp;
        lld n,sum=0;cin>>n;
        lld  a[n];
        for(lld i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            if( mp[a[i]]==2)
                sum++;
        }
        cout<<sum<<endl;
    }
}