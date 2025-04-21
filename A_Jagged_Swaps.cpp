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
    int t;cin>>t;
    while(t--)
    {
        LSD n;cin>>n;
        vec a(n),b(n);
        LOL(i,0,n)cin>>a[i];
        // b=a;
        // sor(b);
        // LOL(i,1,n-1)
        // {
        //     if(a[i-1]<a[i]&&a[i]>a[i+1])
        //     {
        //         swap(a[i],a[i+1]);
        //     }
        // }
        if(a[0]==1)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
 }