#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i] ; 
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i] ; 
        }
        



       int flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i] && a[i] != b[i])
            {
                a.insert(a.begin() + i, b[i]); 
                a.pop_back(); 
                flag++;
            }
        }
        cout << flag << endl;
    }

    
}


