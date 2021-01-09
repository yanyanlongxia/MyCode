//File: P3567.cpp
//Author: yanyanlongxia
//Date: 2020/10/12
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,a[1000005],cnt,root[1000005];
struct node
{
    int l,r,sum;
}t[80000005];
inline void insert(int &p,int l,int r,int pre,int k)
{
    t[++cnt]=t[pre];
    p=cnt;
    t[p].sum++;
    if (l==r)
        return;
    int mid=l+r>>1;
    if(k<=mid)
        insert(t[p].l,l,mid,t[pre].l,k);
    else
        insert(t[p].r,mid+1,r,t[pre].r,k);
}
inline int ask(int l,int r,int L,int R,int len)
{
    if (l==r)
        return l;
    int mid=l+r>>1;
    int tmp1=t[t[R].l].sum-t[t[L].l].sum,tmp2=t[t[R].r].sum-t[t[L].r].sum;
    if (tmp1*2>len)
        return ask(l,mid,t[L].l,t[R].l,len);
    if (tmp2*2>len)
        return ask(mid+1,r,t[L].r,t[R].r,len);
    return 0;
}
int main() {
    int x,y;
    //freopen("P3567.in","r",stdin);
    //freopen("P3567.out","w",stdout);
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for (int i=1;i<=n;i++)
        insert(root[i],1,n,root[i-1],a[i]);
    for (int i=1;i<=m;i++)
    {
        scanf("%d%d",&x,&y);
        printf("%d\n",ask(1,n,root[x-1],root[y],y-x+1));
    }
    return 0;
}
