#include <bits/stdc++.h>
using namespace std;
const bool lav[18] = {true, false, false, false, true, false, false, true, true, false, false, true, true, false, true, true, true, false};

inline bool av(int x){
    return x > 17 || lav[x];
}
int n, m, dp1[100086], dp2[100086];
struct node
{
    int val, pos;
} a[100086];
inline bool operator <(const node &x, const node &y)
{
    return x.pos < y.pos;
}
int main() {
    freopen("mining.in","r",stdin);
    freopen("mining.out","w",stdout);
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d%d", &a[i].val, &a[i].pos);
    sort(a + 1, a + (n + 1));
    a[0].pos = 0;
    dp1[0] = dp2[0] = 0;
    for (int i = 1; i <= n; i++) {
        dp1[i] = -0x3f3f3f3f;
        int j = i - 1;
        for (; j && (a[i].pos - a[j].pos) <= 17; --j)
            if (av(a[i].pos - a[j].pos) && dp1[j] + a[i].val > dp1[i])
                dp1[i] = dp1[j] + a[i].val;
        if (av(a[i].pos - a[j].pos) && dp2[j] + a[i].val > dp1[i])
            dp1[i] = dp2[j] + a[i].val;
        dp2[i] = max(dp2[i - 1], dp1[i]);
    }
    printf("%d\n", dp2[n]);
    return 0;
}