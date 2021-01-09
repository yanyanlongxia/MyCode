//File: P3724.cpp
//Author: yanyanlongxia
//Date: 2020/8/13
//[AHOI2017/HNOI2017]大佬
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,mc,a[110],w[110],c[110],dp[110][110],maxd,maxc,tot1,tot2;
map<pair<int,int> ,bool>hash1;
map<int,bool>hash2;
pair<int,int>am[3000050],afm[3000050];
bool cmp(pair<int,int>a1,pair<int,int>b1)
{
    if(a1.second==b1.second)
        return a1.first<b1.first;
    return a1.second<b1.second;
}
void bfs()
{
    queue<pair<int,pair<int,int> > >q;
    q.push(make_pair(1,make_pair(0,1)));
    hash1[make_pair(1,1)]=true;
    while (!q.empty())
    {
        pair<int,pair<int,int> > tmp=q.front();
        q.pop();
        if(tmp.first>=maxd)
            continue;
        int now=tmp.first,l=tmp.second.first,f=tmp.second.second;
        q.push(make_pair(now+1,make_pair(l+1,f)));
        hash1[make_pair(now+1,f)]=true;
        if(l>1 && l*f<=maxc && !hash1[make_pair(now+1,l*f)])
        {
            q.push(make_pair(now+1,make_pair(l,l*f)));
            hash1[make_pair(now+1,l*f)]=true;
            am[++tot1]=make_pair(now+1,l*f);
        }
    }
}
signed main() {
    scanf("%d%d%d", &n, &m, &mc);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &w[i]);
    }
    for (int i = 1; i <= m; ++i) {
        scanf("%d", &c[i]);
        maxc = max(maxc, c[i]);
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = a[i]; j <= mc; ++j) {
            dp[i][j - a[i]] = max(dp[i - 1][j] + 1, dp[i][j - a[i]]);
            dp[i][min(j - a[i] + w[i], mc)] = max(dp[i - 1][j], dp[i][min(j - a[i] + w[i], mc)]);
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= mc; ++j) {
            maxd = max(maxd, dp[i][j]);
        }
    }
    bfs();
    sort(am + 1, am + tot1 + 1, cmp);
    for (int i = 1; i <= tot1; ++i) {
        if(!hash2[am[i].second])
        {
            hash2[am[i].second]=true;
            afm[++tot2]=am[i];
        }
    }
    for (int i = 1; i <= m; ++i) {
        bool flag=0;
        if (c[i] <= maxd) {
            puts("1");
        } else {
            int sm=1;
            for (int j=tot2;j;j--)
            {
                int now=afm[j].first,f=afm[j].second;
                if(f<=c[i] && maxd-now+f>=c[i])
                {
                    puts("1");
                    flag=1;
                    break;
                }
                long long rest=-0x3f3f3f3f;
                while (sm<=tot2 && f+afm[sm].second<=c[i])
                {
                    rest=max(rest,afm[sm].second-afm[sm].first);
                    sm++;
                }
                if(f+rest-now>=c[i]-maxd)
                {
                    puts("1");
                    flag=1;
                    break;
                }
            }
            if(!flag)
                puts("0");
        }
    }
    return 0;
}