#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    while(n--)
    {
        
        int a=0,b=0;
        string s;
        cin>>s;
       (count(s.begin(), s.end(), 'A')>count(s.begin(), s.end(), 'B')? cout<<'A' : cout<<'B');
        
    }
}