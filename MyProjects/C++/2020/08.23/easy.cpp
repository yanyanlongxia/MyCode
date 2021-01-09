//File: easy.cpp
//Author: yanyanlongxia
//Date: 2020/9/7
//
#include <bits/stdc++.h>

using namespace std;
int n;
long long a[100005],mx=-0x3f3f3f3f;
long long ans=0;
long long t[2][100005];
long long ask(bool id,long long x)
{
    long long res=0;
    for (;x;x-= x & (-x))
        res+=t[id][x];
    return res;
}
void add(bool id,long long x)
{
    for (;x<=mx;x+= x & (-x))
        t[id][x]++;
}
int main() {
    freopen("easy.in","r",stdin);
    freopen("easy.out","w",stdout);
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        mx=max(mx,a[i]);
    }

    for (int q=1;q<=mx;q<<=1)
    {
        memset(t,0,sizeof(t));
        for (int i=n;i;i--)
        {
            bool bit=(a[i]&q);
            int num=ask(!bit,a[i]-1);
            add(bit,a[i]);
            ans+=num*q;
        }
    }
    printf("%lld\n",ans);
    return 0;
}
