#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n];
    b[n]=a[n];
    sort(b,b+n);
     
    int max=a[0],flag=0;
    int min=a[0];

    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            flag++;
            min=a[i];
        }
        if(a[i]>max)
        {
            flag++;
            max=a[i];
        }
    }
    cout<<flag;

}
