#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b;
    cin>>a>>b;
    int flag=0;
    int s=0;
    for(int i=1;i<=a;i++)
    {
        s=s+i*5;
        if(s<=240-b)
        {
            flag++;

        }
    }
    cout<<flag;




}
