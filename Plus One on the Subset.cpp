#include <iostream>
#include <climits> 
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int max = INT_MIN; 
        int min = INT_MAX; 

        for (int i = 0; i < n; i++)
        {
            if (max < a[i])
                max = a[i];
            if (min > a[i])
                min = a[i];
        }
        cout << max - min << endl;
    }

    return 0;
}
