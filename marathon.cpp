#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int a[4],flag=0;
        for(long long int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        for(long long int i=1;i<4;i++)
        {
            if(a[0]<a[i])
            flag++;
        }
        cout<<flag<<endl;

        
      

    }
    
}