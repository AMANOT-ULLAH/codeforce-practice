#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int count_1 = 0, count_2 = 0, count_3 = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == 1)
            count_1++;
        else if(a[i] == 2)
            count_2++;
        else
            count_3++;
    }

    int team_no = min(min(count_1, count_2), count_3);
    cout << team_no << endl;

    stack<int> idx1, idx2, idx3;
    for(int i = 0; i < n; i++) 
    {
        if(a[i] == 1 && idx1.size() != team_no)
        {
            idx1.push(i + 1); 
        }
        else if(a[i] == 2 && idx2.size() != team_no)
        {
            idx2.push(i + 1); 
        }
        else if(a[i] == 3 && idx3.size() != team_no)
        {
            idx3.push(i + 1); 
        }
    }

    for(int i = 0; i < team_no; i++)
    {
        cout << idx1.top() << " " << idx2.top() << " " << idx3.top() << endl;
        idx1.pop();
        idx2.pop();
        idx3.pop();
    }

    return 0;
}
