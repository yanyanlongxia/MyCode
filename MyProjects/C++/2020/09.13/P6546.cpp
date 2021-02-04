//File: P6546.cpp
//Author: yanyanlongxia
//Date: 2020/9/17
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int a,b,v,ans;
int top(double x)
{
    int res=x;
    if (x>(double)res)
        res++;
    return res;
}
signed main() {
    scanf("%lld%lld%lld",&a,&b,&v);
    if (v<a)
    {
        puts("1");
        return 0;
    }
    v-=a;
    ans=top((double)v/(double)(a-b));
    ans+=1;
    printf("%lld\n",ans);
    return 0;
}
