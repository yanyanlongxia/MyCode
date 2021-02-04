//File: nocross.cpp
//Author: yanyanlongxia
//Date: 2020/10/6
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,posa[1000005],posb[1000005],a[1000005],b[1000005],t[10000005],tot,ans;
int lsq[500005][15],now[15];
struct pai
{
    int fi,se;
    pai(){
        fi=se=0;
    }
    bool operator < (pai ot)const
    {
        if (fi == ot.fi)
            return se<ot.se;
        return fi<ot.fi;
    }
};
vector<pai >pa;
map<pai ,int>m;
inline pai make_pai(int ot1,int ot2)
{
    pai tmp;
    tmp.fi=ot1;
    tmp.se=ot2;
    return tmp;
}
inline int ask(int x)
{
    int res=0;
    for (;x;x-=(x & -x))
        res=max(res,t[x]);
    return res;
}
inline void update(int x,int k)
{
    for (;x<=10*n;x+=(x & -x))
        t[x]=max(t[x],k);
}
int main() {
    freopen("nocross.in","r",stdin);
    freopen("nocross.out","w",stdout);
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        posa[a[i]]=i;
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%d",&b[i]);
        posb[b[i]]=i;
    }
    for (int i=1;i<=n;i++)
    {
        int tmp=a[i];
        pa.push_back(make_pai(i,posb[tmp]));
        if (tmp-1>0)
            pa.push_back(make_pai(i,posb[tmp-1]));
        if (tmp+1<=n)
            pa.push_back(make_pai(i,posb[tmp+1]));
        if (tmp-2>0)
            pa.push_back(make_pai(i,posb[tmp-2]));
        if (tmp+2<=n)
            pa.push_back(make_pai(i,posb[tmp+2]));
        if (tmp-3>0)
            pa.push_back(make_pai(i,posb[tmp-3]));
        if (tmp+3<=n)
            pa.push_back(make_pai(i,posb[tmp+3]));
        if (tmp-4>0)
            pa.push_back(make_pai(i,posb[tmp-4]));
        if (tmp+4<=n)
            pa.push_back(make_pai(i,posb[tmp+4]));
    }
    sort(pa.begin(),pa.end());
    for (int i=0;i<pa.size();i++)
        lsq[pa[i].fi][++lsq[pa[i].fi][0]]=pa[i].se;
    for (int i=1;i<=n;i++)
    {
        for (register int j=1;j<=lsq[i][0];j++)
        {
            now[j]=ask(lsq[i][j]-1);
            ans=max(ans,now[j]+1);
        }
        for (register int j=1;j<=lsq[i][0];j++)
            update(lsq[i][j],now[j]+1);
    }
    printf("%d\n",ans);
    return 0;
}
