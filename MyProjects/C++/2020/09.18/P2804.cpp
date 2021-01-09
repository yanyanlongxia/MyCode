//File: P2804.cpp
//Author: yanyanlongxia
//Date: 2020/9/18
//
#include <bits/stdc++.h>
#define int long long
#define mo 92084931
using namespace std;
int n,m,t[1000005],ans,a[1000005],sum[1000005];
vector<int>re;
map<int,int>f;
inline int ask(int x)
{
    int res=0;
    for (;x;x-= (x & -x))
        res+=t[x];
    return res;
}
inline void add(int x,int val)
{
    for (;x<=1000005;x+=(x & -x))
        t[x]+=val;
}
signed main() {
    int x;
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        a[i]-=m;
        sum[i]=sum[i-1]+a[i];
    }
    for (int i=0;i<=n;i++)
    {
        re.push_back(sum[i]);
        re.push_back(sum[i]-1);
    }
    sort(re.begin(),re.end());
    unique(re.begin(),re.end());
    for (int i=0;i<re.size();i++)
        f[re[i]]=i;
    for (int i=0;i<=n;i++)
    {
        ans+=ask(f[sum[i]-1]);
        ans%=mo;
        add(f[sum[i]],1);
    }
    printf("%lld\n",ans);
    return 0;
}
