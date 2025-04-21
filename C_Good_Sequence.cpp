#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> m;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        m[a[i]]++;
    }

    int f = 0;

    for (int i = 1; i < n; ++i) {
        if (m[i] == 0 || m[i] == i) {
            continue;
        } else if (m[i] < i) {
            cout << m[i] << endl;
            f++;
            break;
        } else if (m[i] > i) {
            cout << m[i] - i << endl;
            f++;
            break;
        }
    }

    if (f == 0) {
        cout << "0" << endl;
    }

    return 0;
}
