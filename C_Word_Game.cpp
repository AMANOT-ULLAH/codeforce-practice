#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i, n) for (LSD i = 0; i < n; i++)
#define sor(v) sort(v.begin(), v.end())
#define vec vector<int>
#define stk stack<int>
#define que queue<int>
#define pq priority_queue<LSD>
#define mp map<string, int>
#define st set<int>

void solve() {
	LSD n;
	cin >> n;
	map<string, LSD> m;
	string a[3][n];
	LOL(i,3){
		LOL(j,n) {
			cin >> a[i][j];
			m[a[i][j]]++;
		}
	}
	LOL(i,3) {
		LSD tot = 0;
		LOL(j,n) {
			if (m[a[i][j]] == 1) {tot += 3;}
			else if (m[a[i][j]] == 2) {tot++;}
		}
		cout << tot << ' ';
	}
	cout << '\n';
}

int main()
{
    LSD t;cin>>t;
    while(t--)
    {
       solve();
    }
}