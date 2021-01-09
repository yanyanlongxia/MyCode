//File: P1714.cpp
//Author: yanyanlongxia
//Date: 2020/8/13
//
#include <bits/stdc++.h>

using namespace std;
int n,m,val[500005],ans=-0x3f3f3f3f,sum[500005];
deque<int>q;
int main() {
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d",&val[i]);
        sum[i]=sum[i-1]+val[i];
    }
    q.push_back(0);
    for (int i = 1; i <= n; ++i) {
        while (!q.empty() && q.front()<i-m)
            q.pop_front();
        ans=max(ans,sum[i]-sum[q.front()]);
        while (!q.empty() && sum[i]<=sum[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    printf("%d\n",ans);
    return 0;
}