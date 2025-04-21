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
#define nl cout << endl;
#define aman                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    aman int t;
    cin >> t;
    while (t--)
    {
        int i, n, ar[101] = {}, a;
        cin >> n;
        LOL(i,n)
        {
            cin >> a;
            ar[a]++;
        }

        LOL(i,101)
        {
            if (ar[i])
            {
                cout << i << " ";
                ar[i]--;
            }
        }
         LOL(i,101)
        {
            while (ar[i])
            {
                cout << i << " ";
                ar[i]--;
            }
        }

        cout << "\n";
    }
}