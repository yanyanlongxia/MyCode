//File: CF940F.cpp
//Author: yanyanlongxia
//Date: 2020/10/14
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e6;
vector<int>v;
int n,a[N],cnt[N],app[N],m,bls,bel[N],qcnt,ccnt,ans[N];
struct query{
    int l,r,pre,pos;
    bool operator < (query x)const{
        if (bel[l]==bel[x.l])
        {
            if (bel[r]==bel[x.r])
                return pre<x.pre;
            else
                return r<x.r;
        }else
            return l<x.l;
    }
}ask[N];
struct modify{
    int val,pos;
}change[N];
inline int getid(int x)
{
    return lower_bound(v.begin(),v.end(),x)-v.begin()+1;
}
inline void add(int x)
{
    --app[cnt[x]++];
    app[cnt[x]]++;
}
inline void sub(int x)
{
    --app[cnt[x]--];
    app[cnt[x]]++;
}
inline void cha(int x,int i)
{
    if (change[x].pos>=ask[i].l && change[x].pos<=ask[i].r)
    {
        sub(a[change[x].pos]);
        add(change[x].val);
    }
    swap(a[change[x].pos],change[x].val);
}

int main() {
    freopen("data.in","r",stdin);
    //freopen("CF940F.out","w",stdout);
    scanf("%d%d",&n,&m);
    bls=pow(n,2.0/3);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        v.push_back(a[i]);
        bel[i]=i/bls;
    }
    int opt;
    for (int i=1;i<=m;i++)
    {
        scanf("%d",&opt);
        if (opt==1)
        {
            qcnt++;
            scanf("%d%d",&ask[qcnt].l,&ask[qcnt].r);
            ask[qcnt].pos=qcnt;
            ask[qcnt].pre=ccnt;
        }else{
            ccnt++;
            scanf("%d%d",&change[ccnt].pos,&change[ccnt].val);
            v.push_back(change[ccnt].val);
        }
    }
    sort(ask+1,ask+1+qcnt);
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for (int i=1;i<=n;i++)
        a[i]=getid(a[i]);
    for (int i=1;i<=ccnt;i++)
        change[i].val=getid(change[i].val);
    int l=1,r=0,now=0;
    for (int i=1;i<=qcnt;i++)
    {
        while (l>ask[i].l) add(a[--l]);
        while (r<ask[i].r) add(a[++r]);
        while (l<ask[i].l) sub(a[l++]);
        while (r>ask[i].r) sub(a[r--]);
        while (now<ask[i].pre) cha(++now,i);
        while (now>ask[i].pre) cha(now--,i);
        for (ans[ask[i].pos]=1;app[ans[ask[i].pos]];ans[ask[i].pos]++);
    }
    for (int i=1;i<=qcnt;i++)
        printf("%d\n",ans[i]);
    return 0;
}
