//File: b.cpp
//Author: yanyanlongxia
//Date: 2020/9/13
//
#include <bits/stdc++.h>

using namespace std;
int n,m;
long long maxm,a[50],b[50],ans=0;
inline long long res(long long num) {
    int limit = 0, res = 0;
    for (register int i = 0; i <= n; i++)
        if (num & (1 << i)) {
            limit ^= a[n-i];
            res += b[n-i];
        }
    return limit > m ? -1 : res;
}
inline int read() {
    int f = 1, res = 0;
    char c = getchar();
    while (!isdigit(c))
    {
        if (c == '-')
            f = -1;
        c=getchar();
    }
    while (isdigit(c))
        res = 10 * res + c - '0',c=getchar();
    return f * res;
}
int main() {
    n=read();m=read();
    maxm=1<<n;
    for (int i=1;i<=n;i++)
    {
        a[i]=read();
        b[i]=read();
    }
    for (int i=1;i<maxm;i++)
    {
        ans=max(ans,res(i));
    }
    printf("%lld\n",ans);
}
