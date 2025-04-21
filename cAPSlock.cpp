#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s,c;
  getline(cin,s);
  c.resize(s.size());
  if(isupper(s[0]))
        {
        c[0]=s[0];
        }
     else 
        c[0]=toupper(s[0]);

 for(int i=1;i<s.size();i++)
    {
        if(isupper(s[i]))
        c[i]=tolower(s[i]);
        else
        c[i]=s[i];
    }
    cout<<c;
        
}
