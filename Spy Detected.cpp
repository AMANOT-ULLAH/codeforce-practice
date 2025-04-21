//**************************


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
      int a[n];
      for(int j = 0; j<n; j++)
      {
        cin >> a[j];
      }
      for(int j = 0; j<n; j++)
      {
        int tmp = 0;
        for(int k = 0; k<n; k++)
        {
          if(a[j] == a[k]) tmp++;
        }
        if(tmp == 1)
         cout << j+1 << endl;
      }
    }
}