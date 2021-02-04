//File: P2216.cpp
//Author: yanyanlongxia
//Date: 2020/8/13
//[HAOI2007]理想的正方形
#include <bits/stdc++.h>

using namespace std;
int n,m,k,r[1005][1005],dp[1005][1005][4],ans=0x3f3f3f3f;
deque<int>q;
int main() {
    scanf("%d%d%d",&n,&m,&k);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d",&r[i][j]);
        }
    }
    for (int i = 1; i <= n; ++i) {
        q.clear();
        q.push_back(1);
        for (int j = 1; j <= m; ++j) {
            while (!q.empty() && q.front()<=j-k)
                q.pop_front();
            while (!q.empty() && r[i][j]>=r[i][q.back()])
                q.pop_back();
            q.push_back(j);
            if(j>=k)
                dp[i][j-k+1][0]=r[i][q.front()];
        }
    }
    for (int i = 1; i <= m - k + 1; ++i) {
        q.clear();
        q.push_back(1);
        for (int j = 1; j <= n; ++j) {
            while (!q.empty() && q.front()<=j-k)
                q.pop_front();
            while (!q.empty() && dp[j][i][0]>=dp[q.back()][i][0])
                q.pop_back();
            q.push_back(j);
            if(j>=k)
                dp[j-k+1][i][1]=dp[q.front()][i][0];
        }
    }
    for (int i = 1; i <= n; ++i) {
        q.clear();
        q.push_back(1);
        for (int j = 1; j <= m; ++j) {
            while (!q.empty() && q.front()<=j-k)
                q.pop_front();
            while (!q.empty() && r[i][j]<=r[i][q.back()])
                q.pop_back();
            q.push_back(j);
            if(j>=k)
                dp[i][j-k+1][2]=r[i][q.front()];
        }
    }
    for (int i = 1; i <= m - k + 1; ++i) {
        q.clear();
        q.push_back(1);
        for (int j = 1; j <= n; ++j) {
            while (!q.empty() && q.front()<=j-k)
                q.pop_front();
            while (!q.empty() && dp[j][i][2]<=dp[q.back()][i][2])
                q.pop_back();
            q.push_back(j);
            if(j>=k)
                dp[j-k+1][i][3]=dp[q.front()][i][2];
        }
    }
    for (int i = 1; i <= n - k + 1; ++i) {
        for (int j = 1; j <= m - k + 1; ++j) {
            ans=min(ans,dp[i][j][1]-dp[i][j][3]);
        }
    }
    printf("%d\n",ans);
    return 0;
}