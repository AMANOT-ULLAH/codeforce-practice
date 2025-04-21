#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i, k,n) for (LSD i = k; i < n; i++)
#define sor(v) sort(v.begin(), v.end())
#define vec vector<LSD>
#define delete(vec, k) vec.erase(remove(vec.begin(), vec.end(), k), vec.end());
#define stk stack<int>
#define que queue<int>
#define pq priority_queue<LSD>
#define mp map<int, int>
#define st set<int>
#define  U_set_ch unordered_set<char>
#define nl cout << endl;
#define aman                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
    int main()
    {
        aman
        int t;cin>>t;
        while(t--)
        {
            int x,k;
            cin>>x>>k;
            if (x<k){
                cout<<"1\n"<<x<<endl;
            }
            else {
                if(x%k!=0)
                {
                    cout<<"1\n"<<x<<endl;
                }
                else {
                    cout<<"2\n"<<x-1<<" 1"<<endl;
                }
            }
        }
    }