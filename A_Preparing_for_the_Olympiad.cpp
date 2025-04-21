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

int Sum(int n,int i, int a[1000],int b[1000])
{
    int p=0;
    for (int j=i;j<n;j++)
    {
        p+=a[j];
    }
    return p;
}

int main()
{
    aman
    int t;cin>>t;
    while(t--)
    {
        int n;cin >>n;
        int a[n],b[n], c[n];
        LOL(i,0,n)cin>>a[i]>>b[i];
        for (int i=0;i<n;i++)
        {
            int a=Sum(n,i,a[n],b[n]);
            int b=Sum (n,i+1,a[n],b[n]);
            int c=a-b;
            c[i]=c;

        }
 

    }
}