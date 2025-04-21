#include <iostream>
using namespace std;


bool isBetween(int a, int b, int k) {
    int min_val = min(a, b);
    int max_val = max(a, b);
    return (min_val <= k && k <= max_val);
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c,d;
    
   cin>>a>>b>>c>>d;

    int flag1=0,flag2=0;
    if (isBetween(a, b, c)) 
        flag1++;
    if (isBetween(a, b, d)) 
        flag2++;
        
    if(flag1==0&&flag2==1||flag1==1&&flag2==0)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    

    return 0;
}
