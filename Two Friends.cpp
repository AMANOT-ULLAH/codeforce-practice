#include<bits/stdc++.h>
using namespace std;
int main()

{   
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        bool flag=false;
        map<int,int>m;
        for(int i=0; i<n; i++){
            cin >> a[i];
            m[a[i]]=i+1;
            if(m[i+1]==a[i]){
                flag=true;
            }
        }
        if(flag){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }
    
}