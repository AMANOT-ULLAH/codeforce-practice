#include <iostream>
using namespace std;

int main()
{

    long long int t;
    cin>>t;
    while(t--)
    {
       long long int a,b,result;
        cin>>a>>b;
        long long int x=max(a,b);
        long long int y=min(a,b);
        long long int z=x-y;
       if(z%10==0)
       {
        cout<<z/10<<endl;
       }
       else cout<<z/10+1<<endl;
    }
}