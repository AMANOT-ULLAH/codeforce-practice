#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];

        sort(a,a+n);
        
    int mini=1000;
        for(int i=n-1;i>=1;i--)
        {

           int cnt=abs(a[i]-a[i-1]);
            if(mini>cnt)
            mini=cnt;
        }
        

       

        cout<<mini <<endl;


    }
}