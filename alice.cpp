#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,p;
        cin>>n;
        if(n==1&&n==2){
            p=0;
        }
        if(n%2==0)
        {
            p=(n/2)-1;
        }
        else
        {
            p=n/2;
        }
        cout<<p<<endl;
    }
    
}