#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    
    string x = a + b;
    
    sort(x.begin(), x.end());
    sort(c.begin(), c.end());

    if (c == x)
        cout << "YES";
    else
        cout << "NO";

   

    return 0;
}
