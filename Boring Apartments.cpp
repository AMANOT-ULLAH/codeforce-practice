#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
    int sum1 =( (s[0] - '0')-1)*10;

    int sum2=0;
    for(int i=1;i<=s.size();i++)
    {
        sum2+=i;
    }
    cout<<sum1+sum2<<endl;

    }
}