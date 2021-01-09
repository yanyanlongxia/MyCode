//File: P3112.cpp
//Author: yanyanlongxia
//Date: 2020/10/26
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=50;
int n,maxm;
ll h,ans=-1;
struct cow{
    ll he;
    int we,st;
    cow(){
        he=we=st=0;
    }
    bool operator < (cow b)const{
        return we+st>b.we+b.st;
    }
}c[N];
inline void solve(int now){
    ll tmp=0x3f3f3f3f3f,len=0;
    for (int i=1;i<=n;i++)
        if (now & (1<<(i-1))){
            len+=c[i].he;
            ll sum=0;
            for (int j=i+1;j<=n;j++)
                if (now & (1<<(j-1)))
                    sum+=c[j].we;
            tmp=min(tmp,c[i].st-sum);
        }
    if (len>=h)
        ans=max(ans,tmp);
}
int main() {
    freopen("a.in","r",stdin);
    freopen("a.out","w",stdout);
    scanf("%d%lld",&n,&h);
    for (int i=1;i<=n;i++){
        scanf("%lld%d%d",&c[i].he,&c[i].we,&c[i].st);
    }
    sort(c+1,c+1+n);
    maxm=1<<n;
    for (int i=1;i<maxm;i++)
        solve(i);
    if (ans==-1)
        puts("Mark is too tall");
    else
        printf("%lld\n",ans);
    return 0;
}
