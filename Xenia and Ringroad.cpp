#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;

     long long int goal,current=1,moves=0;
    for( long long int i=0;i<m;i++)
    {
        cin>>goal;
        if(goal>=current)
        {
            moves+=goal-current;
            current=goal;
        }
        else 
        {
            moves=moves+goal-current+n;
             current=goal;
        }
    }
    cout<<moves;
   


}