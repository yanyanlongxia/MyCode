//File: delicacy.cpp
//Author: yanyanlongxia
//Date: 2020/8/18
//
#include <bits/stdc++.h>

using namespace std;
long long n,m,t,k,ans=-1,head[1000001],ver[1000001],nxt[1000001],tot,edge[1000001],c[1000001],e[1000001],tim[1000001];
vector<long  long>jie[1000001];
struct tpair
{
    long  long now,ti,h;
    bool operator > (const tpair& b)const
    {
        return h>b.h;
    }
    bool operator < (const tpair& b)const
    {
        return h<b.h;
    }
};
priority_queue<tpair>q;
void add(long long x,long long y,long long z)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    edge[tot]=z;
    head[x]=tot;
}
void bfs()
{
    q.push((tpair){1,0,c[1]});
    while (!q.empty())
    {
        tpair tmp;
        tmp=q.top();
        q.pop();
        long long x=tmp.now,ti=tmp.ti,dis=tmp.h;
        if(ti==t && x==1)
        {
            ans=dis;
            return;
        }
        if(ti>t)
            continue;
        for(long long i=head[x];i;i=nxt[i])
        {
            long long y=ver[i],z=edge[i];
            tpair nxtt=(tpair){y,ti+z,dis+c[y]};
            for(long long j=0;j<jie[y].size();j++)
            {
                if(nxtt.ti==tim[jie[y][j]])
                    nxtt.h+=e[jie[y][j]];
            }
            q.push(nxtt);
        }
    }
}
int main() {
    //freopen("delicacy.in","r",stdin);
    //freopen("delicacy.out","w",stdout);
    long long x,y,z;
    scanf("%lld%lld%lld%lld",&n,&m,&t,&k);
    for (long long i = 1; i <= n; ++i) {
        scanf("%lld",&c[i]);
    }
    for (long long i = 1; i <= m; ++i) {
        scanf("%lld%lld%lld",&x,&y,&z);
        add(x,y,z);
    }
    for (long long i = 1; i <= k; ++i) {
        scanf("%lld%lld%lld",&x,&y,&z);
        tim[i]=x;
        jie[y].push_back(i);
        e[i]=z;
    }
    bfs();
    if(ans<0)
    {
        printf("-1\n");
        return 0;
    }
    printf("%d\n",ans);
    return 0;
}
