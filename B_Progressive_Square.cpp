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
#define aman  ios_base::sync_with_stdio(false); cin.tie(NULL);

// void delet(vector<LSD> &v, LSD valueToDelete)
// {
//     auto it = find(v.begin(), v.end(), valueToDelete);
//     if (it != v.end())
//     {
//         v.erase(it);
//     }
// }

// LSD min_value(const vector<LSD> &a)
// {
//     LSD mini = a[0];
//     for (LSD i = 1; i < a.size(); i++)
//     {
//         if (mini > a[i])
//             mini = a[i];
//     }
//     return mini;
// }

// bool findValue(const vector<LSD> &v, LSD value)
// {
//     auto it = find(v.begin(), v.end(), value);
//     return (it != v.end());
// }

int main()
{
    //aman;
    LSD t;
    cin >> t;
    while (t--)
    {
        LSD n, c, d;
        cin >> n >> c >> d;
        vector<LSD> v(n * n), ans;
        for (LSD j = 0; j < n * n; j++)
            cin >> v[j];

        sort(v.begin(), v.end());

        for (LSD j = 0; j < n; j++)
        { 
            if (j == 0)
                ans.push_back(v[j]);
            else
                ans.push_back(ans[j - 1] + c);

        }
        for (LSD j = 0; j < n; j++){
            for (LSD k = 1; k < n; k++)
                ans.push_back(ans[j] + (k *d));
        }
            
        sort(ans.begin(), ans.end());

        if (v == ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
