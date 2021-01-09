//
// Created by admin on 2020/8/2.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,v[60000],sum[60000],blo,bel[60000];
bool flag[60000];
void solve(int p)
{
    if (flag[p])
        return;
    flag[p]=1;
    sum[p]=0;
    for(int i=(p-1)*blo+1;i<=p*blo;i++)
    {
        v[i]=sqrt(v[i]);
        sum[p]+=v[i];
        if(v[i]>1)
            flag[p]=0;
    }
}
void change(int a,int b)
{
    for(int i=a;i<=min(bel[a]*blo,b);i++)
    {
        sum[bel[i]]-=v[i];v[i]=sqrt(v[i]);
        sum[bel[i]]+=v[i];
    }
    if(bel[a]!=bel[b])
        for(int i=(bel[b]-1)*blo+1;i<=b;i++)
        {
            sum[bel[i]]-=v[i];v[i]=sqrt(v[i]);
            sum[bel[i]]+=v[i];
        }
    for(int i=bel[a]+1;i<bel[b];i++)
        solve(i);
}
int ask(int a,int b)
{
    int ans=0;
    for(int i=a;i<=min(bel[a]*blo,b);i++)
        ans+=v[i];
    if(bel[a]!=bel[b])
        for(int i=(bel[b]-1)*blo+1;i<=b;i++)
            ans+=v[i];
    for(int i=bel[a]+1;i<bel[b];i++)
        ans+=sum[i];
    return ans;
}
signed main()
{
    int opt,l,r,c;
    scanf("%d",&n);blo=sqrt(n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&v[i]);
        bel[i]=(i-1)/blo+1;
        sum[bel[i]]+=v[i];
    }
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d%d%d",&opt,&l,&r,&c);
        if(opt==0)
            change(l,r);
        else
            printf("%lld\n",ask(l,r));
    }
    return 0;
}