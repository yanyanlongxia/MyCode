//File: ZR1591.cpp
//Author: yanyanlongxia
//Date: 2020/10/7
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,r,t[1000005],ans;
inline void add(int x,int k)
{
    for(;x<=n;x+=(x & -x))
        t[x]+=k;
}
inline int ask(int x)
{
    int res=0;
    for (;x;x-=(x & -x))
        res+=t[x];
    return res;
}
int main() {
    scanf("%d%d",&m,&r);
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        add(i,i-1);
    for (int i=1;i<=n;i++)
        for (int j=i;j<=n;j++)
            if ((ask(j)-ask(i-1))%m==r)
                ans++;
    if (r==0)
        ans++;
    printf("%d\n",ans);
    return 0;
}
