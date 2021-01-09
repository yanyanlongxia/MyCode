//
// Created by admin on 2020/7/11.
//
#include <bits/stdc++.h>
#define maxn 100000
using namespace std;
int m[maxn+5],pre[maxn+5],q,mm,n,tot,prime[maxn+5];
long long cut[maxn+5];
bool vis[maxn+5];
int main()
{
    cin>>q;
    m[1]=1;
    for (int i = 2; i <=maxn ; ++i)
    {  //线性筛取莫比乌斯函数
        if(!vis[i])
        {
            tot++;
            prime[tot]=i;
            m[i]=-1;
        }
        for(int j=1;j<=tot&&i*prime[j]<=maxn;j++)
        {
            vis[i*prime[j]]=true;
            if(i%prime[j]==0)
            {
                m[i*prime[j]]=0;
                break;
            }
            m[i*prime[j]]=-m[i];
        }
    }
    for(int i=1;i<=maxn;i++)
        pre[i]=pre[i-1]+m[i];
    for(int ml=1;ml<=maxn;ml++)  //整除分块预处理
    {
        long long aa=0;
        for(int l=1,r; l <= ml; l= r + 1)
        {
            r=min(ml,ml/(ml/l));
            aa+=1ll*(r-l+1)*(ml/l);  //转为long long
        }
        cut[ml]=aa;
    }
    while(q--)
    {
        scanf("%d%d",&n,&mm);
        long long ans=0;
        if(n>mm)
            swap(n,mm);
        for (int l=1,r; l <= n; l= r + 1)
        {
            r=min(mm/(mm/l),n/(n/l));
            ans+=1ll*(pre[r]-pre[l-1])*cut[n/l]*cut[mm/l];//整除分块
        }
        printf("%lld\n",ans);
    }
    return 0;
}
