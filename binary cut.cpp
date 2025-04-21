#include <iostream>
using namespace std;




int main() {

    int t;
    cin>>t;
    while(t--)
    {
        string s;
    cin >> s;
    int n = s.size();
    int c = 0;

    
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '0' && s[i + 1] == '1') {
            c = -1;
            //break; 
        }
    }

   
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            c++;
        }
    }

    
   cout<<c + 1<<endl;
    
    }
    

    return 0;
}
