//File: CF1360H.cpp
//Author: yanyanlongxia
//Date: 2020/9/28
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,m,maxm,tar,lsq;
set<int>s;
inline int read()
{
    int res=0;char ch=getchar();
    while (!isdigit(ch))
        ch=getchar();
    while (isdigit(ch))
    {
        res=res*2+ch-'0';
        ch=getchar();
    }
    return res;
}
inline void print(int x)
{
    int res[66],cnt=0;
    memset(res,0, sizeof(res));
    for (;x;x>>=1)
    {
        cnt++;
        res[cnt]=x&1;
    }
    reverse(res+1,res+m+1);
    for (int i=1;i<=m;i++)
        printf("%lld",res[i]);
    puts("");
}
inline int getnext(int x)
{
    for (int i=x+1;i<maxm;i++)
        if(s.find(i)==s.end())
            return i;
    return 0;
}
signed main() {
    scanf("%lld",&t);
    while (t--)
    {
        lsq=0;
        int x;
        s.clear();
        scanf("%lld%lld",&n,&m);
        maxm=1ll<<m;
        tar=(maxm-n+1)/2-1;
        for (int i=1;i<=n;i++) {
            x=read();
            if (x<=tar)
                lsq++;
            else
                s.insert(x);
        }
        for (int i=1;i<=lsq;i++)
            tar=getnext(tar);
        print(tar);
    }
    return 0;
}
