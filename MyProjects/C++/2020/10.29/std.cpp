#include <cstdio>
#include <algorithm>
#include <ctype.h>
using namespace std;
const int maxn = 1e6 + 100;
int n,a[maxn];
int main()
{
    //freopen("magic.in", "r", stdin),
    //freopen("magic.ans", "w", stdout);
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i)
        scanf("%d",&a[i]);
    sort(a + 1,a + 1 + n);
    long long res = 0;
    if (n & 1)
        for (int i = 1; i <= n / 2 - 1; ++i)
            res += a[n - i + 1] - a[i];
    else
        for (int i = 1; i * 2 <= n; ++i)
            res += a[n - i + 1] - a[i];
    printf("%lld\n", res);
    return 0;
}
