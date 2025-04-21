#include<bits/stdc++.h>
using namespace std;

int main()
{   
   
   int t;
   cin>>t;
   while (t--)
   {
    int n,flag=0;
    string s;
    cin>>n>>s;
    int onecnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            onecnt++;
        }
    }
    if(onecnt==2)
    {
      for(int i=0;i<n-1;i++)
   {
    if(s[i]=='1'&&s[i+1]=='1')
    {
        flag=1;
    }
   }

    }
  
    if(onecnt%2==1||onecnt==2&& flag==1 ){
        cout<<"NO"<<endl;
    }
   
    else{
        cout<<"YES"<<endl;
    }
   }
} 