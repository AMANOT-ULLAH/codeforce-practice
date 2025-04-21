#include<bits/stdc++.h>
#define lld long long int 
#define lol(n,i) for(lld i=0;i<n;i++)
using namespace std;

int main()
{
    lld t;
    cin>>t;
    while(t--)
    {
        lld n;cin>>n;
        string s;cin>>s;
      map<char,lld>mc;
    lld sum=0;
      lol(n,i)
      {
        if(mc[s[i]]==0)
        {   
            mc[s[i]]++;
            sum+=n-i;
        }
      }
      cout<<sum<<endl;
    
    }
}


/*thanks mah44*/