// GOLD 42

#include <bits/stdc++.h>
using namespace std;

#define LSD long long
#define LOL(i, n) for (LSD i = 0; i < n; i++)
#define sor(v) sort(v.begin(), v.end())
#define vec vector<int>
#define stk stack<int>
#define que queue<int>
#define pq priority_queue<LSD>
#define mp map<char, char>
#define st set<int>

string hudai(const string& input) {
    if (input.empty()) return "";
        
    string result;
    result += input[0]; 
    for (size_t i = 1; i < input.size(); ++i) {
        if (input[i] != input[i - 1]) {
            result += input[i];
        }
    }
    return result;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
     transform(s.begin(), s.end(), s.begin(), ::tolower);
    string y =hudai(s);  
     if(y=="meow")cout<<"YES"<<endl;
    else cout<<"NO"<<endl;  
    }
}