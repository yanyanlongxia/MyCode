#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,l,r;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&l,&r);
        if(r>=2*l)
            cout<<l<<" "<<2*l<<"\n";
        else
            puts("-1 -1");
    }
    return 0;
}