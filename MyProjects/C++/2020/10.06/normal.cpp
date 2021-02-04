//File: normal.cpp
//Author: yanyanlongxia
//Date: 2020/10/7
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
multiset<int,greater<int> ,allocator<int> >s1;
multiset<int>s2;
int n,a[1000005],q;
struct question
{
    int fi,se,id;
    question()
    {
        fi=se=id=0;
    }
    bool operator < (question b)const
    {
        if (fi==b.fi)
            return se<b.se;
        return fi<b.fi;
    }
};
int tot,ans[500005];
question ask[500005];
inline void add(int x)
{
    if (s2.empty() || x>= *(s2.begin()))
        s2.insert(x);
    else
        s1.insert(x);
    while (s1.size()>s2.size()+1)
    {
        x=*(s1.begin());
        s1.erase(s1.begin());
        s2.insert(x);
    }
    while (s2.size()>s1.size())
    {
        x=*(s2.begin());
        s2.erase(s2.begin());
        s1.insert(x);
    }
}
#define mid() *(s1.begin())
inline void erase(int x)
{
    if (s1.find(x)!=s1.end())
        s1.erase(s1.find(x));
    else
        s2.erase(s2.find(x));
    while (s1.size()>s2.size()+1)
    {
        x=*(s1.begin());
        s1.erase(s1.begin());
        s2.insert(x);
    }
    while (s2.size()>s1.size())
    {
        x=*(s2.begin());
        s2.erase(s2.begin());
        s1.insert(x);
    }
}
int main() {
    freopen("normal.in","r",stdin);
    freopen("normal.out","w",stdout);
    scanf("%d%d",&n,&q);
    for (int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for (int i = 1; i <= q; ++i) {
        scanf("%d%d",&ask[i].fi,&ask[i].se);
        ask[i].id=i;
    }
    sort(ask+1,ask+1+q);
    for (int i=ask[1].fi;i<=ask[1].se;i++)
    {
        add(a[i]);
    }
    ans[ask[1].id]=mid();
    for (int i = 2; i <= q; ++i) {
        for (int j=ask[i-1].fi;j<ask[i].fi;j++)
            erase(a[j]);
        for (int j=ask[i].se+1;j<=ask[i-1].se;j++)
            erase(a[j]);
        for (int j=ask[i-1].se+1;j<=ask[i].se;j++)
            add(a[j]);
        for (int j=ask[i-1].se+1;j<ask[i].fi;j++)
            erase(a[j]);
        ans[ask[i].id]=mid();
    }
    for (int i=1;i<=q;i++)
        printf("%d\n",ans[i]);
    return 0;
}
