//hoi nai code 





#include <bits/stdc++.h>
using namespace std;

int arr_sum(vector<int> &arr, int x, int y) {
    int c = 0;
    for (int i = x; i < y; i++) {
        c += arr[i];
    }
    return c;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (k == n) {
        cout << "1" << endl;
        return 0;
    }
     else if (n-k==1) {
        cout << "1" << endl;
        return 0;
    }

    vector<int> sum(n - k + 1); 
  
    for (int i = 0; i <= n - k; i++) {
        sum[i] = arr_sum(a, i, i + k - 1);
    }

    
    auto min_idx = min_element(sum.begin(), sum.end()) - sum.begin();

    cout << min_idx << endl;

    return 0;
}
