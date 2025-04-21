#include <bits/stdc++.h>
using namespace std;

int reverseInt(int num) {
    string S = to_string(num);
    reverse(S.begin(), S.end());
    int reversNum = stoi(S);
    return reversNum;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        
        
        int revab=reverseInt(a);
        int revbb=reverseInt(b);
        
        
        int reva=reverseInt(a);
        
        
        int revb=reverseInt(b);
        
       
        if (a>b||reva>b||a>revb||reva>revb) {
            cout <<"Yes"<<endl;
        } else {
            cout <<"No"<<endl;
        }
    }
    return 0;
}
