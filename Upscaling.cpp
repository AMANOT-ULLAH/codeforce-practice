#include<bits/stdc++.h>
using namespace std;


int main(){
 int n;
 cin>>n;
while(n--)
{
    int n;
    cin>>n;
    for(int i=0;i<2*n;i++){
        for(int j=0;j<n;j++){
            if((i/2+j)%2==0){
                printf("##");
            }
            else printf("..");
        }
        cout<<endl;
    }
}
}