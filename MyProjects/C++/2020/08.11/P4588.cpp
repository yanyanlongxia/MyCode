//File: P4588.cpp
//Author: yanyanlongxia
//Date: 2020/8/13
//[TJOI2018]数学计算
#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,tree[1000000],mod,m,p;
signed main() {
    scanf("%lld",&t);
    while (t--)
    {
        int opt,x;
        scanf("%lld%lld",&n,&mod);
        for (m=1;m<=n;m<<=1);
        fill(tree+1,tree+m+n+2,1);
        for (int i = 1; i <= n; ++i) {
            scanf("%lld%lld",&opt,&x);
            if(opt==1)
            {
                tree[i+m]=x;
                p=i+m;
            }
            else
            {
                tree[x+m]=1;
                p=x+m;
            }
            while (p>>=1)
                tree[p]=(tree[p<<1]*tree[p<<1 | 1])%mod;
            printf("%lld\n",tree[1]);
        }

    }
    return 0;
}