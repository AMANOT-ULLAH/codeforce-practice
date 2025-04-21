//GOLD 42

//not accepted

#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i,n) for(LSD i=0;i<n;i++)
#define sor(v) sort(v.begin(), v.end())
#define vec vector<int>
#define stk stack<int>
#define que queue<int>
#define pq priority_queue<int>
#define mp map<int, int>
#define st set<int>


int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin >> s;
		LSD x = 1;
		if(s[0] == '0')  x= 0;
		if(s[0] == '?') x = 9;
		LOL(j, s.size()-1)
			if(s[j] == '?')
				x *= 10;
		cout << x << endl;
    }
}