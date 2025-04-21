#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j;
    cin>>n;
    int a[n];
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum = accumulate(a,a+n , 0);
    int flag=sum/2;


   for(int i=1;i<=n;i++)
   {
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            swap(a[i],a[i+1]);
        }
    }
   }
   int ans=0;
   j=0;
   for(int i=0;i<n;i++)
   {
       ans+=a[i];
            j++;
            if(ans>flag)
                break;

   }
   cout<<j<<endl ;
   



}