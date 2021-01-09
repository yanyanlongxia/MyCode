//File: P3834.cpp
//Author: yanyanlongxia
//Date: 2020/10/12
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000005],m,cnt,root[1000005];
vector<int>v;
map<int,int>id;
struct node
{
    int l,r,sum;
}t[8000005];
void insert(int &p,int l,int r,int pre,int x)
{
    t[++cnt]=t[pre];
    p=cnt;
    t[p].sum++;
    if (l==r)
        return;
    int mid=l+r>>1;
    if (x<=mid)
        insert(t[p].l,l,mid,t[pre].l,x);
    else
        insert(t[p].r,mid+1,r,t[pre].r,x);
}
int query(int l,int r,int L,int R,int k)
{
    if (l==r)
        return l;
    int mid=l+r>>1;
    int tmp=t[t[R].l].sum-t[t[L].l].sum;
    if (k<=tmp)
        return query(l,mid,t[L].l,t[R].l,k);
    else
        return query(mid+1,r,t[L].r,t[R].r,k-tmp);
}
int main() {
    int x,y,z;
    //freopen("P3834.in","r",stdin);
    //freopen("P3834.out","w",stdout);
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for (int i=0;i<v.size();i++)
        id[v[i]]=i+1;
    for (int i=1;i<=n;i++)
        insert(root[i],1,n,root[i-1],id[a[i]]);
    while (m--)
    {
        scanf("%d%d%d",&x,&y,&z);
        printf("%d\n",v[query(1,n,root[x-1],root[y],z)-1]);
    }
    return 0;
}
