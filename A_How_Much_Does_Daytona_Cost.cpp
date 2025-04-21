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
 

int main(){
	int t; 
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k; 
		bool flag=0;
		LOL(i,0,n){
			int a; 
			cin >> a;
			if(a==k)flag=1; 
		}
		if(flag)cout << "YES\n"; 
		else cout << "NO\n";
	}
}