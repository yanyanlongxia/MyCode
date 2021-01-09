//File: P3092.cpp
//Author: yanyanlongxia
//Date: 2020/8/11
//[USACO13NOV]No Change G
#include <bits/stdc++.h>

using namespace std;
int n,m,dp[100000],cot[100000],val[20],cost[100005],tot,ans=0x3f3f3f3f,sum[100005],maxn;
int bsearch(int x,int pos)
{
    int l=pos,r=n,mid;
    while (l<=r)
    {
        mid=(l+r)>>1;
        if(sum[mid]-sum[pos-1]==x)
            return mid;
        if(sum[mid]-sum[pos-1]<x)
            l=mid+1;
        else
            r=mid-1;
    }
    return r;
}
int main() {
    scanf("%d%d",&m,&n);
    for (int i = 1; i <= m; ++i) {
        scanf("%d",&val[i]);
        tot+=val[i];
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%d",&cost[i]);
        sum[i]=sum[i-1]+cost[i];
    }
    maxn=1 << m;
    for(int i=0;i<maxn;i++)
        for(int j=0;j<m;j++)
            if(i & (1<<j))
            {
                int last=i ^ (1<<j),s=bsearch(val[j+1],dp[last]+1);
                if(s>dp[i])
                {
                    dp[i]=s;
                    cot[i]=cot[last]+val[j+1];
                    if(dp[i]==n)
                        ans=min(ans,cot[i]);
                }
            }
    if(ans==0x3f3f3f3f || tot-ans<0)
        puts("-1");
    else
        printf("%d\n",tot-ans);
    return 0;
}