//File: P5815.cpp
//Author: yanyanlongxia
//Date: 2020/8/14
//[CQOI2010]扑克牌
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,c[1000000];
bool check(int x)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
        if(c[i]<x)
            cnt+=x-c[i];
    return min(m,x)>=cnt;
}
signed main() {
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&c[i]);
    int l=1,r=1e13,mid;
    while (l<r)
    {
        mid=l+r+1>>1;
        if(check(mid))
            l=mid;
        else
            r=mid-1;
    }
    printf("%d\n",l);
    return 0;
}