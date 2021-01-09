//File: T141166.cpp
//Author: yanyanlongxia
//Date: 2020/8/8
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,appear[64];
void pre(int num)
{
    for(int i=0;i<=40;i++)
        if((num>>i)&1)
            appear[i]++;
}
int query(int mn)
{
    int ans=0,res=0;
    for(int i=40;i>=0;i--)
    {
        int x0=(1<<i)*(appear[i]),x1=(1<<i)*(n-appear[i]);
        if(ans+x1<=mn)
        {
            ans+=x1;
            res+=(1<<i);
        } else{
            if(ans+x0<=mn)
            {
                ans+=x0;
            } else
                return -1;
        }
    }
    return res;
}
signed main() {
    int x;
    scanf("%lld",&n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld",&x);
        pre(x);
    }
    scanf("%lld",&m);
    for (int i = 1; i <= m; ++i) {
        scanf("%lld",&x);
        printf("%lld\n",query(x));
    }
    return 0;
}