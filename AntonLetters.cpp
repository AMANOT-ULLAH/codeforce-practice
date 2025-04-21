#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    set<char> a;
    getline(cin,s);
    
    for (char ch : s) 
    {
        if (islower(ch)) 
        {
            a.insert(ch);
        }
    }
        cout << a.size();
    }

   

