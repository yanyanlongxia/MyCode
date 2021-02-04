//File: a.cpp
//Author: yanyanlongxia
//Date: 2020/10/12
//
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dx[2]={1, 0}, dy[2]={0, 1},n, m, t,cnt, tot,ans;
struct node{
    ll x, y, dis;
}a[500005];
ll f[501][501],fa[500001],size[500001],num[501][501],v[500005];
inline ll find(ll x)
{
    if (x == fa[x])
        return fa[x];
    return fa[x]=find(fa[x]);
}
inline bool cmp(node x,node y)
{
    return x.dis<y.dis;
}
int  main()
{
    freopen("a.in","r",stdin);
    freopen("a.out","w",stdout);
    for(int i=1;i<=500004;i++)
        size[i]=1,fa[i]=i;
    scanf("%lld%lld%lld",&n,&m,&t);
    tot=0;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            scanf("%lld",&f[i][j]);
            tot+=1;
            num[i][j]=tot;
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            int flag;
            scanf("%d",&flag);
            if(flag)
                v[num[i][j]]=1;
            for (int k=0;k<=1;k++)
            {
                int tx=i+dx[k],ty=j+dy[k];
                if (tx<n+1&&ty<m+1)
                    a[++cnt]=(node){num[i][j],num[tx][ty],abs(f[i][j]-f[tx][ty])};
            }
        }
    }
    sort(a+1,a+1+cnt,cmp);
    for(int i=1;i<=cnt;i++)
    {
        int x=a[i].x,y=a[i].y;
        int fx=find(x), fy=find(y);
        if(fx==fy)
            continue;
        if (size[fx]+size[fy]>=t)
        {
            if (size[fx]<t)
                ans+=a[i].dis*v[fx];
            if (size[fy]<t)
                ans+=a[i].dis*v[fy];
        }
        if (size[fx]>size[fy])
            swap(fx,fy);
        fa[fx]=fy;
        size[fy]+=size[fx],v[fy]+=v[fx];
    }
    printf("%lld\n",ans);
    return 0;
}
