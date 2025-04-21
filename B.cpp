#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sor(v) sort(v.begin(), v.end())
#define vec vector<int>
#define stk stack<int>
#define que queue<int>
#define pq priority_queue<int>
#define mp map<int, int>
#define st set<int>
#define us unordered_set<int>
#define ump unordered_map<ll, int>

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;  
        int flag = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int k = 0; k < n; k++) {
            mp c;
            int i = 0;
            int j = 0;
            int ans = 0;
            while (j < n) {
                ans = ans | a[j];  
                if (j == k + i ) {
                    c[ans]++;
                    ans = 0;
                    i++;
                    j=i;
                    continue;
                }
                j++;
            }
            if (c.size() == 1) {
                cout << k+1 << endl;
                break;
            }
        }
    }
    
    return 0;
}