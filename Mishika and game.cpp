#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,flag1=0,flag2=0;;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        flag1++;
        else if(a<b)
        flag2++;

        else {
            flag1=flag1;
            flag2=flag2;
        }
    }
    if(flag1>flag2)
    cout<<"Mishka"<<endl;

    else if(flag1<flag2)
    cout<<"Chris"<<endl;

    else cout<<"Friendship is magic!^^"<<endl;
}