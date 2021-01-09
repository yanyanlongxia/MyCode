//File: a.cpp
//Author: yanyanlongxia
//Date: 2020/9/12
//
#include <bits/stdc++.h>

using namespace std;
int n,ans;
long long t,st[1000005],v[1000005],ed[1000005],now;
int main() {
    freopen("a.in","r",stdin);
    freopen("a.out","w",stdout);
    scanf("%d%lld",&n,&t);
    for (int i=1;i<=n;i++)
    {
        scanf("%lld%lld",&st[i],&v[i]);
        ed[i]=st[i]+v[i]*t;
    }
    now=ed[1];
    ans=1;
    for (int i=2;i<=n;i++)
    {
        if(ed[i]<=now)
            ans++;
        now=ed[i];
    }
    printf("%d\n",ans);
    return 0;
}
