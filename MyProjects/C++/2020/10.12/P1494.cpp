//File: P1494.cpp
//Author: yanyanlongxia
//Date: 2020/10/14
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e5+5;
int n,a[N],m,cnt[N],ansf[N],anss[N],fi,se,bls,bel[N],tot;
struct query
{
    int l,r,pos;
    bool operator < (query x)const
    {
        if (bel[l]==bel[x.l])
            return r<x.r;
        return bel[l]<bel[x.l];
    }
}ask[N];
inline void add(int x)
{
    fi+=cnt[a[x]];
    se+=tot;
    cnt[a[x]]++;
    tot++;
}
inline void sub(int x)
{
    fi-=cnt[a[x]]-1;
    se-=tot-1;
    cnt[a[x]]--;
    tot--;
}
int gcd(int x,int y)
{
    return y==0?x:gcd(y,x%y);
}
inline void print(int x)
{
    int g=gcd(ansf[x],anss[x]);
    ansf[x]/=g;
    anss[x]/=g;
    printf("%d/%d\n",ansf[x],anss[x]);
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P1494.out","w",stdout);
    scanf("%d%d",&n,&m);
    bls=sqrt(n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        bel[i]=i/bls;
    }
    for (int i=1;i<=m;i++)
    {
        scanf("%d%d",&ask[i].l,&ask[i].r);
        ask[i].pos=i;
    }
    sort(ask+1,ask+1+m);
    int l=1,r=0;
    for (int i=1;i<=m;i++)
    {
        if (ask[i].l==ask[i].r)
        {
            ansf[ask[i].pos]=0;
            anss[ask[i].pos]=1;
            continue;
        }
        while (ask[i].l<l)  add(--l);
        while (ask[i].r>r)  add(++r);
        while (ask[i].l>l)  sub(l++);
        while (ask[i].r<r)  sub(r--);
        ansf[ask[i].pos]=fi;
        anss[ask[i].pos]=se;
    }
    for (int i=1;i<=m;i++)
        print(i);
    return 0;
}
