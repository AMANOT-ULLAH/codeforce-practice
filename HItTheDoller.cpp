#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    int a[]={100,20,10,5,1};
    cin>>n;
    for(int c:a)
    {
        ans+=n/c;
        n=n%c;
    }
    cout<<ans<<endl;
    return 0;
}