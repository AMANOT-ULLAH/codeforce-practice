#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {string s,t;
    cin>>s;
     int n=s.length();
     t+=s[0];
     for(int i=1;i<n-1;i+=2)
     {
        t+=s[i];
     }
     t+=s[n-1];
      cout<<t<<endl; 
}
}