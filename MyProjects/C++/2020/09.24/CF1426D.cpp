//File: CF1426D.cpp
//Author: yanyanlongxia
//Date: 2020/9/28
//
#include <bits/stdc++.h>

using namespace std;
int n,a[1000005],sum[1000005],ans;
map<int ,int>m;
set<int>used;
vector<pair<int,int> >ch;
int main() {
    m[0]=1;
    scanf("%d",&n);
    for (int i=2;i<=n;i++) {
        scanf("%d", &a[i]);
        sum[i]=sum[i-1]+a[i];
        if (m[sum[i]]) {
            ch.push_back(make_pair(m[sum[i]], i));
            m[sum[i]]=0;
        }
        else
            m[sum[i]]=i;
    }
    sort(ch.begin(),ch.end());
    int now;
    if (!ch.empty()) {
        ans = 1;
        now=ch[0].second;
    }
    else
        ans=0;
    for (int i=1;i<ch.size();i++) {
        if (ch[i].first >= now) {
            ans++;
            now = ch[i].second;
        }
        now=min(now,ch[i].second);
    }
    printf("%d\n",ans);
    return 0;
}
