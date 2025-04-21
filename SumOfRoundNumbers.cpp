#include <bits/stdc++.h>
using namespace std;

string addZero(string s, int size) {
    for (int i = 0; i < size-1; i++) {
        s = s+"0" ;
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        string s = to_string(a);

        int sz = s.size();
        int flag =0;

        for (int i = 0; i < sz; i++) {
            if (s[i] >= '1') {
               
                flag++;
            }
        }

        cout<<flag<<endl;

        for (int i = 0; i < sz; i++) {
            if (s[i] >= '1') {
                cout << addZero(string(1, s[i]), sz - i) << " ";
               
            }
        }
        cout<<endl;
    
    }
    
    return 0;
}
