//Created by yanyanlongxia on 2021/5/7
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
ll r,x,y;
ll cusqrt(ll a){
    for(ll i=0;i<=100000;i++){
        if(i*i==a)
            return i;
        if(i*i>a)
            return i-1;
    }
    return INF;
}
ll upf(ll a,ll b){
    ll res=a/b;
    if(b*res!=a)
        res++;
    return res;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("abc198C.out","w",stdout);
    scanf("%lld%lld%lld",&r,&x,&y);
    ll sqdis=x*x+y*y;
    double dis=sqrt(sqdis);
    int res=ceil(dis/r);
    if(dis<r)
        res=2;
    printf("%d\n",res);
    return 0;
}
