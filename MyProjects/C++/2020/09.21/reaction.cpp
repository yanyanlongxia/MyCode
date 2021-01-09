//File: reaction.cpp
//Author: yanyanlongxia
//Date: 2020/9/21
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,ans;
struct substance
{
    int a,b;
}no[1000005];
set<int>s;
bool cmp(substance x,substance y)
{
    return x.b<y.b;
}
signed main() {
    freopen("reaction.in","r",stdin);
    freopen("reaction.out","w",stdout);
    scanf("%lld",&t);
    while (t--)
    {
        ans=0x3f3f3f3f3f3f3f3f;
        scanf("%lld",&n);
        for (int i=1;i<=n;i++)
            scanf("%lld%lld",&no[i].a,&no[i].b);
        sort(no+1,no+n+1,cmp);
        s.clear();
        s.insert(no[1].a);
        for (int i=2;i<=n;i++)
        {
            set<int>::iterator it=s.lower_bound(no[i].a);
            if (it!=s.end())
                ans=min(ans,(*it-no[i].a+1)*no[i].b);
            if (it!=s.begin())
                ans=min(ans,(no[i].a-*(--it)+1)*no[i].b);
            s.insert(no[i].a);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
