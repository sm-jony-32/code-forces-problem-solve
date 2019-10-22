#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c=0,n,x,y,z,p[100];
    cin>>a>>b;
    for(i=0;i<a;i++){
        cin>>p[i];
    }
    for(i=0;i<a;i++){
        if(p[i]>=p[b-1] && p[i]){
            c++;
        }
    }

   cout<<c<<endl;
    return 0;
}
