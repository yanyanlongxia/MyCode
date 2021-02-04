//File: UVA1619.cpp
//Author: yanyanlongxia
//Date: 2020/9/22
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[100005],sum[100005],s[100005],top,l[100005],r[100005],ans,ln,rn;
signed main() {
    puts("");
    while (~scanf("%lld",&n))
    {
        sum[0]=0;
        for (int i=1;i<=n;i++) {
            scanf("%lld", &a[i]);
            sum[i]=sum[i-1]+a[i];
        }
        ans=top=0;
        memset(s,0,sizeof(s));
        memset(l,0,sizeof(l));
        for (int i=1;i<=n;i++)
        {
            while (top>0 && a[s[top]]>=a[i])
                top--;
            if (top>0)
                l[i]=s[top];
            s[++top]=i;
        }
        top=0;
        memset(s,0,sizeof(s));
        memset(r,0,sizeof(r));
        for (int i=n;i>=1;i--)
        {
            while (top>0 && a[s[top]]>=a[i])
                top--;
            if (top>0)
                r[i]=s[top];
            s[++top]=i;
        }
        for (int i=1;i<=n;i++) {
            r[i]==0 ? r[i]=1 : r[i]=r[i]-1;
            l[i]==0 ? l[i]=1 : l[i]=l[i]+1;
            if ((sum[r[i]] - sum[l[i] - 1]) * a[i] > ans)
            {
                ans=(sum[r[i]] - sum[l[i] - 1]) * a[i];
                ln=l[i];
                rn=r[i];
            }
        }
        printf("%lld\n%lld %lld\n",ans,ln,rn);
    }
    return 0;
}