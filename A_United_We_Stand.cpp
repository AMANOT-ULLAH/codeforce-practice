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
#define st set<LSD>
#define  U_set_ch unordered_set<char>
#define nl cout << endl;
#define aman                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
 

int main()
{
   aman
	LSD t; 
	cin >> t;
	while(t--)
    {
        LSD n;cin>>n;
        vec a(n);
        
        LOL(i,0,n) cin>>a[i];
        

        st set;
        LOL(i,0,n) set.insert(a[i]);
        

        if (set.size()==1) cout<<"-1"<<endl;
        else{
            sor(a);
            
            LSD x=a[n-1];
            LSD flag=1;
            for(LSD i=n-2;i>0;i--)
            {
                if(a[n-1]==a[i])
                {
                    flag++;
                    continue;
                }
                else break;
            }
            cout<<n-flag<<" "<<flag<<endl;

            LOL(i,0,n-flag)  cout<<a[i]<<" ";
            nl;
            
            LOL(i,n-flag,n) cout<<a[i]<<" ";
            nl;


           
            
        }
    
    }
}