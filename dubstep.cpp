#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    int flag=0;//
    int flag2=0;//wub pawar pore jate space print na kore
    while(i!=s.length())
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            if(i==0){
                flag2=1;
            }
            if(i+5<s.size()&&s[i+3]=='W'&&s[i+4]=='U'&&s[i+5]=='B'){
                i+=3;
                continue;
            }
            else{
                i+=3;
                if(flag==0&&flag2==1){//prothome jate space print na kore
                    flag=1;
                    continue;
                }
                cout<<" ";
            }
        }
        else
        { 
            cout<<s[i];
            i++;
        }
      
    }
}