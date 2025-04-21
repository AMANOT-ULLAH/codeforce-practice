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
#define mp map<int, int>
#define st set<int>
#define nl cout << endl;
#define aman                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    aman
     int t;
    cin >> t;
    while (t--)
    {
        int n,c;
        cin>>n>>c;
        mp m;
        int a[n];
        LOL(i,n)
        {
            cin>>a[i];
            m[a[i]]++;
        }





        int flag=0;
        for (auto& pair : m)
        {
            if(c==1)
            {
                if(pair.second>=1)
                flag++;
            }
            else 
            {
                if(pair.second>=c)
                {
                    flag+=c;
                }
                else flag+=pair.second;
            }
        }
        cout<<flag<<endl;

    }
}      