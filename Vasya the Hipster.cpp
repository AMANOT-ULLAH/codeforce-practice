#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
   
    cout<<min(n,m)<<" ";

    int flag=max(n,m);
    int x=flag-min(n,m);
    int same=x/2;
    cout<<same;



}