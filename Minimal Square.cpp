#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        double c=sqrt(2*a*b);
        string s=to_string(c);

        cout<<ceil(c)*ceil(c)<<endl;    
    }
}