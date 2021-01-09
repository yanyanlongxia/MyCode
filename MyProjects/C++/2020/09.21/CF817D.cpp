//File: CF817D.cpp
//Author: yanyanlongxia
//Date: 2020/9/23
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[1000005],s[1000005],top,lmax[1000005],rmax[1000005],lmin[1000005],rmin[1000005],ans;
signed main() {
    scanf("%lld",&n);
    for (int i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    top=1;s[1]=0;
    for (int i=1;i<=n;i++)
    {
        if (top==0 || a[i]>a[s[top]])
        {
            s[++top]=i;
            lmin[i]=i-1;
        }else
        {
            while (top>0 && a[i]<a[s[top]])
                top--;
            lmin[i]=s[top];
            s[++top]=i;
        }
    }
    top=1;s[1]=n+1;
    for (int i=n;i>=1;i--)
    {
        if (top==0 || a[i]>a[s[top]])
        {
            s[++top]=i;
            rmin[i]=i+1;
        }else
        {
            while (top>0 && a[i]<=a[s[top]])
                top--;
            rmin[i]=s[top];
            s[++top]=i;
        }
    }
    a[0]=a[n+1]=0x3f3f3f3f3f;
    top=1;s[1]=0;
    for (int i=1;i<=n;i++)
    {
        if (top==0 || a[i]<a[s[top]])
        {
            s[++top]=i;
            lmax[i]=i-1;
        }else
        {
            while (top>0 && a[i]>a[s[top]])
                top--;
            lmax[i]=s[top];
            s[++top]=i;
        }
    }
    top=1;s[1]=n+1;
    for (int i=n;i>=1;i--)
    {
        if (top==0 || a[i]<a[s[top]])
        {
            s[++top]=i;
            rmax[i]=i+1;
        }else
        {
            while (top>0 && a[i]>=a[s[top]])
                top--;
            rmax[i]=s[top];
            s[++top]=i;
        }
    }
    for (int i=1;i<=n;i++) {
        ans += a[i] * ((i - lmax[i]) * (rmax[i] - i) - (i - lmin[i]) * (rmin[i] - i));
    }
    printf("%lld\n",ans);
    return 0;
}
