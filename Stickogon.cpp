#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[103]={0};
        int n,count=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];

        for(int i=0;i<n;i++)
        {
            arr[a[i]]++;
        }

        for(int i=0;i<101;i++)
        {
            if((arr[i]/3)>0)
            {
                count+=arr[i]/3;
            }
        }

        cout<<count<<endl;
    }
}