//File: POJ2104.cpp
//Author: yanyanlongxia
//Date: 2020/10/19
//
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <cstdio>

#define ll long long
using namespace std;
const int N=2e6;
int n,m,root[N],cnt,a[N];
vector<int>v;
struct node{
    int l,r,sz;
}t[N*40];
void insert(int &p,int l,int r,int pre,int k){
    t[++cnt]=t[pre];
    p=cnt;
    t[p].sz++;
    if (l==r)
        return;
    int mid=l+r>>1;
    if (k<=mid)
        insert(t[p].l,l,mid,t[pre].l,k);
    else
        insert(t[p].r,mid+1,r,t[pre].r,k);
}
int query(int l,int r,int L,int R,int k){
    if (l==r)
        return l;
    int mid=l+r>>1,tmp=t[t[R].l].sz-t[t[L].l].sz;
    if (k<=tmp)
        return query(l,mid,t[L].l,t[R].l,k);
    else
        return query(mid+1,r,t[L].r,t[R].r,k-tmp);
}
inline int ask(int l,int r,int k){
    return query(1,n,root[l-1],root[r],k);
}
inline int getid(int val){
    return lower_bound(v.begin(),v.end(),val)-v.begin()+1;
}
int main() {
    int l,r,k;
    freopen("data.in","r",stdin);
    //freopen("POJ2104.out","w",stdout);
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for (int i=1;i<=n;i++)
        insert(root[i],1,n,root[i-1],getid(a[i]));
    while (m--){
        scanf("%d%d%d",&l,&r,&k);
        printf("%d\n",v[ask(l,r,k)-1]);
    }
    return 0;
}
