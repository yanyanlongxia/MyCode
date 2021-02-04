//File: CF1417A.cpp
//Author: yanyanlongxia
//Date: 2020/9/27
//
#include <bits/stdc++.h>

using namespace std;
int t,n,k,a[1000005],ans,maxn;
priority_queue<int,vector<int>,greater<int> >q;
int main() {

    scanf("%d",&t);
    while (t--)
    {
        while (!q.empty())
            q.pop();
        maxn=0;
        ans=0;
        scanf("%d%d",&n,&k);
        for (int i=1;i<=n;i++) {
            scanf("%d", &a[i]);
            maxn=max(maxn,a[i]);
            q.push(a[i]);
        }
        while (maxn<=k)
        {
            int now=q.top();
            q.pop();
            int next=q.top();
            q.pop();
            q.push(now);
            q.push(now+next);
            maxn=max(maxn,now+next);
            if (maxn<=k)
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
