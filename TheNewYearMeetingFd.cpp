#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b;
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>b;
        a[i]=b;
    }

    sort(a,a+3);
    int d=a[2]-a[0];
    cout<<d;

}