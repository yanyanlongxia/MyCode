//
// Created by admin on 2020/7/5.
//
#include <bits/stdc++.h>
using namespace std;
int n,q,k,prime[5000000];
bool f[5000000];
int main()
{
    scanf("%d%d",&n,&q);
    for(int i=2;i<=n;i++)
    {
        if(!f[i])
            prime[++prime[0]]=i;
        for(int j=1;j<=prime[0]&&i*prime[j]<=n;j++)
        {
            f[i*prime[j]]=true;
            if(i%prime[j]==0)
                break;
        }
    }
    for(int i=1;i<=q;i++)
    {
        scanf("%d",&k);
        printf("%d\n",prime[k]);
    }
    return 0;
}