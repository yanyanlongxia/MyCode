//File: P2564.cpp
//Author: yanyanlongxia
//Date: 2020/8/13
//[SCOI2009]生日礼物
#include <bits/stdc++.h>
#define int long long
#define rg register
using namespace std;
struct br
{
    int color,pos;
}b[1000005];
int n,k,tot,vis[1000005],ans=0x3f3f3f3f;
deque<br>q;
bool cmp(br a1,br b1)
{
    return a1.pos<b1.pos;
}
signed main() {
    int x;
    scanf("%lld%lld",&n,&k);
    for (rg int i = 1; i <= k; ++i) {
        scanf("%d",&x);
        for (rg int j = 1; j <= x; ++j) {
            tot++;
            scanf("%d",&b[tot].pos);
            b[tot].color=i;
        }
    }
    sort(b+1,b+n+1,cmp);
    for (rg int i = 1; i <= n; ++i) {
        vis[b[i].color]++;
        q.push_back(b[i]);
        while (!q.empty() && vis[q.front().color]>1)
        {
            vis[q.front().color]--;
            q.pop_front();
        }
        bool flag=1;
        for (rg int j = 1; j <= k; ++j) {
            if(!vis[j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            ans=min(ans,q.back().pos-q.front().pos);
    }
    printf("%lld\n",ans);
    return 0;
}