#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,pol=0,crime=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;

        if(a>0)
        {
            pol=pol+a;
        }
        else 
        {
            if(pol<1)
            {
                ++crime;
            }
            else{
               -- pol;
            }
        }
    }

    cout<<crime;
}