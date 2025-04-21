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


int even_chk(int a )
{
    int x=a;
    int f=0;
    while(1)
    {
        if (x%2==0){
            x=x/2;
            f++;
        }
        else  return f;
    }
}

int main()
{
    aman
    LSD n;cin>>n;
    vec v(n),v1(n);
    LOL(i,0,n)cin>>v[i];
    LOL(i,0,n)
    {
        v1[i]=even_chk(v[i]);
    }
    sor(v1);
    cout<<v1[0];
}