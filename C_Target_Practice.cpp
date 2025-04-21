#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i,k,n) for (LSD i = k; i < n; i++)
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
 

// int main()
// {
//    aman
// 	int t; 
// 	cin >> t;
// 	while(t--){
//         char ch [10][10];
//         LOL(i,0,10){
//             LOL(j,0,10)
//             {
//                 cin>>ch[i][j];
//             }
//         }
//             int sum=0;
//          LOL(i,0,10){
//             LOL(j,0,10)
//             {
//                 if(ch[i][j]=='X')
//                 {
//                     if(i==0&&j>=9||i==9&&j>=9||j==0&&i>=9||j==9&&i>=9)
//                     sum+=1;
//                     else if(i==1&&j>=8||i==8&&j>=8||j==1&&i>=8||j==8&&i>=8)sum+=2;
//                     else if(i==2&&j>=7||i==7&&j>=7||j==2&&i>=7||j==7&&i>=7)sum+=3;
//                     else if(i==3&&j>=6||i==6&&j>=6||j==3&&i>=6||j==6&&i>=6)sum+=4;
//                     else if(i==4&&j>=5||i==5&&j>=5||j==4&&i>=5||j==5&&i>=5)sum+=5;
//                 }
//             }
//          }
//         cout<<sum<<endl;
//     }
// }


 
const int MAX = 200007;
const int MOD = 1000000007;
 
int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};
 
void solve() {
	int ans = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			char c;
			cin >> c;
			if (c == 'X') {ans += score[i][j];}
		}
	}
	cout << ans << '\n';
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}