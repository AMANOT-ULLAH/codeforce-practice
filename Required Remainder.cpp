#include <iostream>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int x, y, n;
        cin >> x >> y >> n;
        
        
       long long  int k = (n - y) / x * x + y;
        
        cout << k << endl;
    }
    return 0;
}
