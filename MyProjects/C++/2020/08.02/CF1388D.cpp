//
//Author: yanyanlongxia
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[1000000],b[1000000],ans,deg[1000000];
set<int>node;//入度为0的点的集合
vector<int>an[2];
signed main() {
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        node.insert(i);
    }
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&b[i]);
        if(b[i]!=-1)
        {
            deg[b[i]]++;
            if(deg[b[i]]==1)
                node.erase(b[i]);
        }
    }
    while (!node.empty())
    {
        int v=*node.begin();
        node.erase(node.begin());
        ans+=a[v];
        if(a[v]>=0)
        {
            if(b[v]>=0)
                a[b[v]]+=a[v];
            an[0].push_back(v);
        }else
            an[1].push_back(v);
        if(b[v]>=0)
        {
            deg[b[v]]--;
            if(deg[b[v]]==0)
                node.insert(b[v]);
        }
    }
    printf("%lld\n",ans);
    for(int i=0;i<an[0].size();i++)
        printf("%lld ",an[0][i]);
    reverse(an[1].begin(),an[1].end());
    for(int i=0;i<an[1].size();i++)
        printf("%lld ",an[1][i]);
    puts("");
    return 0;
}