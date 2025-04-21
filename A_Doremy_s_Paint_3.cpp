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
        mp m;

        LOL(i,0,n)
        {
            cin>>a[i];
            m[a[i]]++;
        }

        st s;
        LOL(i,0,n)
        {
            s.insert(a[i]);
        }

        if(s.size()>2) 
        cout<<"No"<<endl;

        else if(s.size()==1)
        cout<<"Yes"<<endl;
        else 
        {
            if(s.size()==2)
            {
                auto it=s.begin();
                int x=*it;
                ++it;
                int y=*it;
                if(m[x]-m[y]==1 || m[x]-m[y]==0||m[y]-m[x]==1)
                cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            

        }

    }
 } 