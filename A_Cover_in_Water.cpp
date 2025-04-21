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
        bool flag=false;
        int n,count=0;cin>>n;
        string s;cin>>s;
        LOL(i,0,n-2)
        {
            if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.')
            {
                cout<<"2"<<endl;
                flag=true;
                break;
            }
            
        }

        if(flag==false)
        {
            LOL(i,0,n)
            {
            if(s[i]=='.') count++;
            }
            cout<<count<<endl;
        }

    }
}