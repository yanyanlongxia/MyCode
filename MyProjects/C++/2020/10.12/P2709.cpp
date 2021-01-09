//File: P2709.cpp
//Author: yanyanlongxia
//Date: 2020/10/14
//
#include <bits/stdc++.h>

#define ll long long
#define square(x) ((x)*(x))
using namespace std;
const int N=2e5+5;
int n,k,a[N],bel[N],bls,m,cnt[N];
ll res,ans[N];
inline int read()
{
    int f=1,ret=0;char ch=getchar();
    while (!isdigit(ch))
    {
        if (ch=='-')
            f=-1;
        ch=getchar();
    }
    while (isdigit(ch))
    {
        ret=ret*10+ch-'0';
        ch=getchar();
    }
    return f*ret;
}
struct query
{
    int l,r,pos;
}ask[N];
bool cmp(query x,query y)
{
    if (bel[x.l]==bel[y.l])
        return x.r<y.r;
    return bel[x.l]<bel[y.l];
}
inline void add(int x)
{
    cnt[a[x]]++;
    res+=(ll)square(cnt[a[x]])-(ll)square(cnt[a[x]]-1);
}
inline void sub(int x)
{
    cnt[a[x]]--;
    res-=(ll)square(cnt[a[x]]+1)-(ll)square(cnt[a[x]]);
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P2709.out","w",stdout);
    //scanf("%d%d%d",&n,&m,&k);
    n=read(),m=read(),k=read();
    bls=sqrt(n);
    for (int i=1;i<=n;i++) {
        //scanf("%d",&a[i]);
        a[i] = read();
        bel[i]=i/bls;
    }
    for (int i=1;i<=m;i++) {
        ask[i].l=read();
        ask[i].r=read();
        //scanf("%d%d", &ask[i].l, &ask[i].r);
        ask[i].pos=i;
    }
    sort(ask+1,ask+m+1,cmp);
    int l=1,r=0;
    //res=a[1];
    //cnt[a[1]]=1;
    for (int i=1;i<=m;i++)
    {
        while (ask[i].l<l) add(--l);
        while (ask[i].r>r) add(++r);
        while (ask[i].l>l) sub(l++);
        while (ask[i].r<r) sub(r--);
        ans[ask[i].pos]=res;
    }
    for (int i=1;i<=m;i++)
        printf("%lld\n",ans[i]);
    return 0;
}
