#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int total=k*l;
    int toast=total/nl;
    int lime=c*d;
    int sault=p/np;
    int mini = min(min(toast/n, lime/n), sault/n);
    cout<<mini;
}