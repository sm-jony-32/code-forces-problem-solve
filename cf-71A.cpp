#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c,n;
    string x;
    cin>>n;
    while(n--){
        cin>>x;
        a=x.length();
        if(a>10){
         cout<<x[0]<<a-2<<x[a-1]<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    return 0;
}
