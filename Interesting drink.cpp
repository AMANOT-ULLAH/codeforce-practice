#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,m,flag=0,k,ans;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    cin>>m;
    
    while(m--)
    {
    
        cin>>k;

        ans=upper_bound(a,a+n,k)-a;
        cout<<ans<<endl;

    }
}