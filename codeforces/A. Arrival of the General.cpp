#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxi = *max_element(a.begin(), a.end());
    int mini = *min_element(a.begin(), a.end());
    int maxpos ;
    int minipos ;

    // Find the position of the maximum and minimum heights
    for (int i = 0; i < n; i++)
    {
        if (maxi == a[i])
        {
            maxpos = i;
            a.insert(a.begin(),maxi );
        }
    }

    for(int i=0;i<n;i++)
    {
         if (mini == a[i])
        {
            minipos = i;
            a.insert(a.end(),mini);

        }
    }
    cout<<minipos+maxpos;
}
