//File: a.cpp
//Author: yanyanlongxia
//Date: 2020/10/19
//

#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,sum,now,ans,l,r,g1[101][101],g2[101][101],mp[101][101],a[101][101];
char s[1010];
int main() {
    freopen("a.in", "r", stdin);
    freopen("a.out", "w", stdout);
    scanf("%d%d", &n, &m);
    ans = min(n, m);
    for (i = 1; i <= n; i++) {
        scanf("%s", s + 1);
        for (j = 1; j <= m; j++)
            if (s[j] == 'R')
                a[i][j] = 1;
            else
                a[i][j] = 2;
    }
    while (now < n * m) {
        sum = 0;
        for (i = 1; i <= n; i++)
            for (j = 1; j <= m; j++) {
                g1[i][j] = min(g1[i - 1][j], min(g1[i][j - 1], g1[i - 1][j - 1])) + 1;
                g2[i][j] = min(g2[i - 1][j], min(g2[i][j - 1], g2[i - 1][j - 1])) + 1;
                if (a[i][j] == 1)
                    g2[i][j] = 0;
                if (a[i][j] == 2)
                    g1[i][j] = 0;
                if (!mp[i][j] && max(g1[i][j], g2[i][j]) > sum) {
                    sum = max(g1[i][j], g2[i][j]);
                    l = i;
                    r = j;
                }
            }
        mp[l][r] = 1;
        ans = min(ans, sum);
        for (i = l - sum + 1; i <= l; i++)
            for (j = r - sum + 1; j <= r; j++) {
                if (a[i][j])
                    now++;
                a[i][j] = 0;
            }
    }
    printf("%d", ans);
}
