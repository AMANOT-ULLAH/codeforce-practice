#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,flag=0;
        int freq_chk[1000]={0};
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            freq_chk[a[i]]++;
        }

        for(auto x:freq_chk)
        {
            if(x>=k)
            flag=1;
        }
        if(flag==1)
        cout<<k-1<<endl;
        else cout<<n<<endl;
    }
}