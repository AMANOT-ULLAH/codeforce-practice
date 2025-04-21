#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i, n) for (int i = 0; i < n; i++)
#define sor(v) sort(v.begin(), v.end())
#define vec vector<LSD>
#define stk stack<int>
#define que queue<int>
#define pq priority_queue<LSD>
#define mp map<string, int>
#define st set<int>
#define pbk push_back
#define  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


vec Gold42(LSD n) {
    vec biri;
    while (n > 0) {
        if (n % 2 == 0) {
            biri.pbk(0);
            n /= 2;
        } else {
            if (n % 4 == 1) {
                biri.pbk(1);  n = (n - 1) / 2;
  
            } 
            else {
                biri.pbk(-1); n = (n + 1) / 2; 
            }
        }
    }
    return biri;
}

int main() {
    int t;
    cin >> t;
    //vector<vec> all;

    while(t--) {
        LSD ip;
        cin >> ip;
        vec cur = Gold42(ip);

        cout<<cur.size()<<endl;
        for(auto i:cur)cout<<i<<" ";

        cout<<endl;
        //all.pbk(cur);

    }

    // for (const auto& res : all) {
    //     cout << res.size() << endl;
    //     for (size_t i = 0; i < res.size(); ++i) {
    //         if (i > 0) cout << " ";
    //         cout << res[i];
    //     }
    //     cout << endl;
    // }

    // return 0;
}
