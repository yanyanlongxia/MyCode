//
// Created by admin on 2020/8/2.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,v[60000],tag[60000],sum[60000],blo,bel[60000];
void add(int a,int b,int c) {
    for (int i = a; i <= min(bel[a] * blo, b); i++)
        v[i]+=c,sum[bel[a]]+=c;
    if(bel[a]!=bel[b])
        for(int i=(bel[b]-1)*blo+1;i<=b;i++)
            v[i]+=c,sum[bel[b]]+=c;
    for(int i=bel[a]+1;i<=bel[b]-1;i++)
        tag[i]+=c;
}
int query(int a,int b)
{
    int ans=0;
    for(int i=a;i<=min(bel[a]*blo,b);i++)
        ans+=v[i]+tag[bel[a]];
    if(bel[a]!=bel[b])
        for(int i=(bel[b]-1)*blo+1;i<=b;i++)
            ans+=v[i]+tag[bel[b]];
    for(int i=bel[a]+1;i<=bel[b]-1;i++)
        ans+=sum[i]+blo*tag[i];
    return ans;
}
signed main()
{
    int l=0,r=0,c=0,opt=0;
    scanf("%d",&n);
    blo=sqrt(n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&v[i]);
        bel[i]=(i-1)/blo+1;
        sum[bel[i]]+=v[i];
    }
    for(int  i=1;i<=n;i++)
    {
        scanf("%d%d%d%d",&opt,&l,&r,&c);
        if(opt==0)
            add(l,r,c);
        if(opt==1)
            printf("%d\n",query(l,r)%(c+1));
    }
    return 0;
}