//File: P3521.cpp
//Author: yanyanlongxia
//Date: 2020/8/20
//[POI2011]ROT-Tree Rotations
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,tot,ans,mi1,mi2,root[1000005],cnt;
struct segment
{
    int lc,rc,dat;
}t[8000005];
inline int build()
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
    int mid=(l+r)>>1;
    if(val<=mid)
        insert(t[p].lc,l,mid,val);
    else
        insert(t[p].rc,mid+1,r,val);
    t[p].dat=t[t[p].lc].dat+t[t[p].rc].dat;
}
int merge(int p,int q)
{
    if(!q)
        return p;
    if(!p)
        return q;
    mi1+=t[t[p].lc].dat*t[t[q].rc].dat;
    mi2+=t[t[p].rc].dat*t[t[q].lc].dat;
    t[p].lc=merge(t[p].lc,t[q].lc);
    t[p].rc=merge(t[p].rc,t[q].rc);
    t[p].dat=t[t[p].lc].dat+t[t[p].rc].dat;
    return p;
}
int dfs()
{
    int pos,val;
    scanf("%lld",&val);
    if(val==0)
    {
        int lc=dfs(),rc=dfs();
        pos=merge(lc,rc);
        ans+=min(mi1,mi2);
        mi1=mi2=0;
        return pos;
    }
    else
    {
        insert(root[++cnt],1,n,val);
        return root[cnt];
    }
}
signed main() {
    scanf("%lld",&n);
    dfs();
    printf("%lld\n",ans);
    return 0;
}
