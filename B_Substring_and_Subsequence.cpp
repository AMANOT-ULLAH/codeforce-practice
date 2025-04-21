#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i, n) for (LSD i = 0; i < n; i++)
#define sor(v) sort(v.begin(), v.end())
#define vec vector<LSD>
#define delete(vec, k) vec.erase(remove(vec.begin(), vec.end(), k), vec.end());
#define stk stack<int>
#define que queue<int>
#define pq priority_queue<LSD>
#define mp map<string, int>
#define st set<int>
#define  U_set_ch unordered_set<char>
#define nl cout << endl;
#define aman                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    string a, b;
    cin >> a>> b;
    int n = a.size(), m = b.size(), result = m;
    for (int x = 0; x < m; x++)
    {
        int curr = x, i2 = x;
        for (int i1 = 0; i1 < n; i1++)
        {
            if (a[i1] == b[i2])
            {
                i2++;
                if (i2 == m)
                    break;
            }
        }
        result = min(result, curr + m - i2);
    }
    cout << result + n << '\n';
}

int main() {
    aman
    int t;
    cin >> t;
    
    while (t--) {

       solve();
        
    }
    
   
}
