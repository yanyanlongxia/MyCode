//File: P3224 .cpp
//Author: yanyanlongxia
//Date: 2020/8/19
//[HNOI2012]永无乡
#include <bits/stdc++.h>

using namespace std;
int n,m,q,tot,fa[1000005],a[1000005],buc[1000005],root[1000005];
struct segment
{
    int lc,rc,dat;
}t[4000005];
int find(int x)
{
    if(fa[x]==x)
        return x;
    return fa[x]=find(fa[x]);
}
int build()
{
    tot++;
    t[tot].lc=t[tot].rc=t[tot].dat=0;
    return tot;
}
void insert(int &p,int l,int r,int va)
{
    if(!p)
        p=build();
    if(l==r)
    {
        t[p].dat++;
        return;
    }
    int mid=l+r>>1;
    if(va<=mid)
        insert(t[p].lc,l,mid,va);
    else
        insert(t[p].rc,mid+1,r,va);
    t[p].dat=t[t[p].lc].dat+t[t[p].rc].dat;
}
int query(int &p,int l,int r,int k)
{
    if(l==r)
        return l;
    int tm=t[t[p].lc].dat,mid=l+r>>1;
    if(k<=tm)
        return query(t[p].lc,l,mid,k);
    else
        return query(t[p].rc,mid+1,r,k-tm);
}
int merge(int x,int y)
{
    if(!x)
        return y;
    if(!y)
        return x;
    t[x].lc=merge(t[x].lc,t[y].lc);
    t[x].rc=merge(t[x].rc,t[y].rc);
    t[x].dat=t[t[x].lc].dat+t[t[x].rc].dat;
    return x;
}
int main() {
    int x,y;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d",&a[i]);
        buc[a[i]]=i;
        fa[i]=i;
    }
    for (int i = 1; i <=m; ++i) {
        scanf("%d%d",&x,&y);
        fa[find(y)]=find(x);
    }
    for (int i = 1; i <= n; ++i) {
        insert(root[find(i)],1,n,a[i]);
    }
    scanf("%d",&q);
    while (q--)
    {
        string st;
        cin>>st;
        if(st[0]=='B')
        {
            scanf("%d%d",&x,&y);
            register int fx=find(x),fy=find(y);
            if(fx^fy)
            {
                root[fx]=merge(root[fx],root[fy]);
                fa[fy]=fx;
            }
        }
        else
        {
            scanf("%d%d",&x,&y);
            register int fx=find(x);
            if(t[root[fx]].dat<y)
            {
                printf("-1\n");
                continue;
            }
            printf("%d\n",buc[query(root[fx],1,n,y)]);
        }
    }
    return 0;
}
