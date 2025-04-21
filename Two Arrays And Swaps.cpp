#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum1=0,sum2=0,sum3=0;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
          
        for(int i=0;i<n;i++)cin>>b[i]; 
            
        
            sort(a,a+n);
            sort(b,b+n); 
            for(int i=0,j=n-1;i<k;i++,j--)
            {
                if(b[j]>a[i])
                swap(a[i],b[j]);
            }

            for(int i=0;i<n;i++)sum3+=a[i];

            cout<<sum3<<endl;
        
    }
}
