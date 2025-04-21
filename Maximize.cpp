#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int max=0;
        for(int i=1;i<x;i++)
        {
            int z=gcd(x,i)+i;
            if(max<z)
            {
                max=z;
            }
        }
        cout<<max<<endl;
    }
}