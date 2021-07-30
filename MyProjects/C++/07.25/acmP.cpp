#include <iostream>
using namespace std;
const int N=2e6;
int n,m,wai[N],tag,alr;
int main(){
    freopen("data.in","r",stdin);
    freopen("P.out","w",stdout);
    cin>>n>>m;
/*
    if(n==0){
        puts("-1");
        return 0;
    }
*/
    if(double(n/m)>9.0){
        puts("-1");
        return 0;
    }

    for(int i=1;i<=9;i++)
        wai[i]=m;
    //wai[10]=0x3f3f3f3f;
    wai[1]=m-1;
    n--;
    bool vis=false;
    tag=1;alr=0;
    for(int i=1;i<=10;i++){
        if(n<wai[i]){
            tag=n;
            alr=i-1;
            if(i==1)
                tag=n+1;
            vis=true;
            break;
        }else
            n-=wai[i];
    }
    if(!vis){
        puts("-1");
        return 0;
    }

    for(int i=1;i<=m;i++){
        if(i<=tag)
            printf("%d",alr+1);
        else
            printf("%d",alr);
    }
    puts("");
    return 0;
}
