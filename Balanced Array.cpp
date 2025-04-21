#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum1=0,sum2=0;
        cin>>n;
        if((n/2)%2!=0) cout<<"NO"<<endl;

        else {
            
            cout<<"YES"<<endl;

            for(long long int i=0;i<n/2;i++)
            {
                cout<<2*(i+1)<<" ";
                sum1+=2*(i+1);
            }
            for(long long int i=0;i<(n/2)-1;i++)
            {
                cout<<2*i+1<<" ";
                sum2+=2*i+1;
            }
            cout<<sum1-sum2<<endl;
            
        }

    }
}