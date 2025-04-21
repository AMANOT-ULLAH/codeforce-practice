
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, f[1000];
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> f[i];
    }
    sort(f, f + m);
    int least = f[n-1] - f[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (f[i+n-1] - f[i] < least)
        {
            least = f[i+n-1] - f[i];
        }
    }
    cout << least << endl;
    return 0;
}












/*#include<bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)  
{  
    return *min_element(arr, arr + n);  
}  
  
int getMax(int arr[], int n)  
{  
    return *max_element(arr, arr + n);  
}  

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m], c[m], temp[m];
    for(int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    int x = m - n + 1; 
    int k = 0;
    int output[x]; // Array to store output values
    int idx = 0; // Index to store values in output array
    int min_diff = INT_MAX; // Initialize min_diff with a large value
    while(x--)
    {
        for(int i = k; i < n + k; i++)
        {
            temp[i - k] = a[i]; 
        }

        int p = getMax(temp, n);
        int q = getMin(temp, n);
        int dif = p - q;
        output[idx++] = dif; 

        // Update min_diff if the current difference is smaller
        min_diff = min(min_diff, dif);
        
        k++; 
    }

    cout << min_diff;

    return 0;
}*/
