#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(int i=1;i<=m;i++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            int p=i/2;
            if(p%2!=0)
            {
                for(int i=1;i<m;i++)
                {
                    cout<<".";
                }
                cout<<"#"<<endl;
            }
            else{
                cout<<"#";
                for(int i=1;i<m;i++)
                {
                    cout<<".";
                }
                cout<<endl;
            }
        }
    }
}