//File: P3605.cpp
//Author: yanyanlongxia
//Date: 2020/8/19
//[USACO17JAN]Promotion Counting P
#include <bits/stdc++.h>

using namespace std;
int n,po[100005],tot,ntot,head[1000005],ver[1000005],nxt[1000005],root[1000005],ans[1000005],b[1000005];
struct segment
{
    int lc,rc,dat;
}t[8000005];
void add(int x,int y)
{
    ver[++ntot]=y;
    nxt[ntot]=head[x];
    head[x]=ntot;
}
int build()
{
    tot++;
    t[tot].lc=t[tot].rc=t[tot].dat=0;
    return tot;
}
void insert(int &p,int l,int r,int val)
{
    if(!p)
        p=build();
    if(l==r)
    {
        t[p].dat++;
        return;
    }
    int mid=l+r>>1;
    if(val<=mid)
        insert(t[p].lc,l,mid,val);
    else
        insert(t[p].rc,mid+1,r,val);
    t[p].dat=t[t[p].lc].dat+t[t[p].rc].dat;
}
int merge(int p,int q)
{
    if(!p)
        return q;
    if(!q)
        return p;
    t[p].lc=merge(t[p].lc,t[q].lc);
    t[p].rc=merge(t[p].rc,t[q].rc);
    t[p].dat=t[t[p].lc].dat+t[t[p].rc].dat;
    return p;
}
int query(int p,int l,int r,int val)
{
    if(!p)
        return 0;
    if(val<=l)
        return t[p].dat;
    int mid=l+r>>1,res=0;
    if(val<=mid)
        res+=query(t[p].lc,l,mid,val);
    res+=query(t[p].rc,mid+1,r,val);
    return res;
}
void dfs(int x)
{
    for(int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        dfs(y);
        merge(root[x],root[y]);
    }
    ans[x]=query(root[x],1,n,po[x]+1);
}
int main() {
    int x;
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d",&po[i]);
        b[i]=po[i];
    }
    sort(b+1,b+1+n);
    int num=unique(b+1,b+1+n)-b-1;
    for (int i = 1; i <= n; ++i) {
        po[i]=lower_bound(b+1,b+num+1,po[i])-b;
        insert(root[i],1,n,po[i]);
    }
    for(int i=2;i<=n;i++)
    {
        scanf("%d",&x);
        add(x,i);
    }
    dfs(1);
    for (int i = 1; i <= n; ++i) {
        printf("%d\n",ans[i]);
    }
    return 0;
}
