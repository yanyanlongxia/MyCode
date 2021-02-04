//File: SP1805.cpp
//Author: yanyanlongxia
//Date: 2020/9/22
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[1000005],s[1000005],top,ans,w[100005];
signed main() {
    while (true)
    {
        scanf("%lld",&n);
        if (n==0)
            break;
        top=0;
        ans=0;
        for (int i=1;i<=n;i++)
            scanf("%lld",&a[i]);
        a[n+1]=0;
        for (int i=1;i<=n+1;i++)
        {
            if (top==0 || a[i]>s[top])
                s[++top]=a[i],w[top]=1;
            else
            {
                int res=0;
                while (top>0 && a[i]<s[top])
                {
                    res+=w[top];
                    ans=max(ans,res*s[top]);
                    top--;
                }
                s[++top]=a[i];
                w[top]=res+1;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
