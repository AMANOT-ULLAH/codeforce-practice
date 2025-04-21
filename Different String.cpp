#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int flag=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[0]!=s[i])
            {
                swap(s[0],s[i]);
                flag++;
                break;
            }
        }
        if(flag==0)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl<<s<<endl;
        }
    }
    return 0;
}
