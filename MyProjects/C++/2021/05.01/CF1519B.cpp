//Created by yanyanlongxia on 2021/5/2
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
int t,n,m,k;
bool vis[102][102][10002],por[102][102][10002];
bool possi(int a,int b,int c) {
    if (a < 1 || b < 1 || c < 0)
        return false;
    if (vis[a][b][c])
        return por[a][b][c];
    if (a == 1 && b == 1 && c == 0)
        return true;

    vis[a][b][c] = true;
    return por[a][b][c] = (possi(a, b - 1, c - a) || possi(a - 1, b, c - b));
}
int main() {
    //freopen("data.in","r",stdin);
    //freopen("CF1519B.out","w",stdout);
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%d", &n, &m, &k);
        if (possi(n, m, k))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
