#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, k, x;
        cin >> n >> m >> k;
       
        if(n%m!=0)
        {
            x=n/m+1;
        
        }
        else {
            x=n/m;
        }
        if(n - x <= k)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
