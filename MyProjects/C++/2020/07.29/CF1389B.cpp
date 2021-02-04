//
// Created by admin on 2020/7/31.
//
#include <bits/stdc++.h>
using namespace std;
int f[100005],k,n,z,sum,ans;
int main ()
{
    int tt=0; scanf ("%d",&tt);
    while (tt--) {
        scanf ("%d%d%d",&n,&k,&z); k++; sum=0; ans=0;
        for (int i=1;i<=n;i++)
            scanf ("%d",&f[i]);
        int mx=0;
        for (int i=1;i<=k;i++)
        {
            sum+=f[i];
            if (i<n) mx=max (mx,f[i]+f[i+1]);
            ans=max (ans,min ((k-i)/2,z)*mx+sum);
        }
        printf ("%d\n",ans);
    }
    return 0;
}
