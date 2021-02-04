//File: P3919.cpp
//Author: yanyanlongxia
//Date: 2020/10/12
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000005],m,cnt,root[1000005];
struct node
{
    int l,r,sum;
}t[80000005];
inline void update(int p)
{
    t[p].sum=t[t[p].l].sum+t[t[p].r].sum;
}
void build(int &p,int l,int r)
{
    p=++cnt;
    if (l==r)
    {
        t[p].sum=a[l];
        return;
    }
    int mid=l+r>>1;
    build(t[p].l,l,mid);
    build(t[p].r,mid+1,r);
    update(p);
}
void insert(int &p,int l,int r,int pre,int loc,int k)
{
    t[++cnt]=t[pre];
    p=cnt;
    if (l==r)
    {
        t[p].sum=k;
        return;
    }
    int mid=l+r>>1;
    if (loc<=mid)
        insert(t[p].l,l,mid,t[pre].l,loc,k);
    else
        insert(t[p].r,mid+1,r,t[pre].r,loc,k);
    update(p);
}
int ask(int p,int l,int r,int loc)
{
    if (l==r)
        return t[p].sum;
    int mid=l+r>>1;
    if (loc<=mid)
        return ask(t[p].l,l,mid,loc);
    else
        return ask(t[p].r,mid+1,r,loc);
}
int main() {
    int opt,pre,loc,val;
    //freopen("P3919.in","r",stdin);
    //freopen("P3919.out","w",stdout);
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    build(root[0],1,n);
    for (int i=1;i<=m;i++)
    {
        scanf("%d%d",&pre,&opt);
        if (opt==1)
        {
            scanf("%d%d",&loc,&val);
            insert(root[i],1,n,root[pre],loc,val);
        }
        else
        {
            scanf("%d",&loc);
            root[i]=root[pre];
            printf("%d\n",ask(root[pre],1,n,loc));
        }
    }
    return 0;
}
