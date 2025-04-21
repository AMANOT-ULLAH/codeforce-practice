//GOLD 42

#include<bits/stdc++.h>
#define lsd long long int
#define lol(i,n) for (int i=0;i<n;i++)
using namespace std;

void chk(int n, int m, vector<vector<char>>& chr)
{
    int w=0, x=0, y=0, z=0, p=0, q=0, r=0, s=0;
    bool flag1=false, flag2=false, flag3=false, flag4=false, f1=false, f2=false, f3=false, f4=false;
    
    // Row 1 check 
    lol(i, m)
    {
        if(chr[0][i] == 'W') w++;
        else if(chr[0][i] == 'B') x++;
    }
    if(w == m) flag1 = true;
    else if(x == m) flag2 = true;

    // Last row check 
    
    lol(i, m)
    {
        if(chr[n-1][i] == 'W') y++;
        else if(chr[n-1][i] == 'B') z++;
    }
    if(y == m) flag3 = true;
    else if(z == m) flag4 = true;

    // Column 1 check 
    lol(i, n)
    {
        if(chr[i][0] == 'W') p++;
        else if(chr[i][0] == 'B') q++;
    }
    if(p == n) f1 = true;
    else if(q == n) f2 = true;

    // Last column check 
    lol(i, n)
    {
        if(chr[i][m-1] == 'W') r++;
        else if(chr[i][m-1] == 'B') s++;
    }
    if(r == n) f3 = true;
    else if(s == n) f4 = true;

    if((flag1 && flag4) || (flag2 && flag3)) cout << "NO" << endl;
    else if((f1 && f4) || (f2 && f3)) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> chr(n, vector<char>(m));
        lol(i, n)
        {
            lol(j, m)
            {
                cin >> chr[i][j];
            }
        }
        chk(n, m, chr);
    }
    return 0;
}
