//File: ZR15890.cpp
//Author: yanyanlongxia
//Date: 2020/10/7
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,p[1005],t[1005],k,ans;
inline void add(int x,int k)
{
    for (;x<=n;x+=(x & -x))
        t[x]+=k;
}
inline int ask(int x)
{
    int res=0;
    for (;x;x-=(x & -x))
        res+=t[x];
    return res;
}
inline bool valid()
{
    memset(t,0, sizeof(t));
    int ret=0;
    for (int i=n;i>=1;i--)
    {
        ret+=ask(p[i]-1);
        add(p[i],1);
    }
    if (ret!=k)
        return false;
    for (int i=1;i<=n;i++)
        if (p[p[i]]!=i)
            return false;
    return true;
}
int main() {
    scanf("%d%d",&n,&k);
    for (int  i=1;i<=n;i++)
        p[i]=i;
    do {
        if (valid())
            ans++;
    } while (next_permutation(p+1,p+n+1));
    printf("%d\n",ans%998244353);
    return 0;
}
