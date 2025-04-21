#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
         int visited[5]={0};
        ll int n;
        cin>>n;
        ll int a[n];
        for(ll int i=0;i<n;i++)
        {
            cin>>a[i];
            visited[a[i]]++;
        }
        if (visited[1]%2==0 && visited[2]%2==0)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
