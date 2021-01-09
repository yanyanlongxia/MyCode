#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#define ll long long
#define _for(i,a,b) for(int i =(a); i<(b); i++)
#define _rep(i,a,b) for(int i =(a); i<=(b); i++)
using namespace std;

const int maxn = 100000 + 100;
int n, A[maxn], left[maxn], right[maxn], p[maxn];
ll S[maxn];

int main() {
    //freopen("output.txt", "w", stdout);
    int kase = 0;
    while (scanf("%d", &n) == 1) {
        _rep(i, 1, n) scanf("%d", &A[i]);

        // 求前缀和
        memset(S, 0, sizeof(S));
        S[0] = 0;
        _rep(i, 1, n) S[i] = A[i] + S[i - 1];

        // 求left[maxn]，用单调栈
        int t = 0;
        memset(p, 0, sizeof(p));
        memset(left, 0, sizeof(left));
        _rep(i, 1, n) {
            while (t > 0 && A[p[t-1]] >= A[i]) t--;
            if (t != 0) left[i] = p[t - 1];
            p[t++] = i;
        }
        // 求right[maxn]
        t = 0;
        memset(p, 0, sizeof(p));
        memset(right, 0, sizeof(right));
        for (int i = n; i > 0; i--) {
            while (t > 0 && A[p[t-1]] >= A[i]) t--;
            if (t != 0) right[i] = p[t - 1];
            p[t++] = i;
        }

        // 求答案，遍历
        ll ans = 0;
        int L, R, bestL = 1, bestR = 1;
        _rep(i, 1, n) {
            L = left[i] == 0 ? 1 : left[i]+1;
            R = right[i] == 0 ? n : right[i]-1;
            if ((S[R] - S[L - 1])*A[i] > ans){
                ans = (S[R] - S[L - 1])*A[i];
                bestL = L;
                bestR = R;
            }
        }
        if (kase++) printf("\n%lld\n%d %d\n", ans,bestL,bestR);
        else printf("%lld\n%d %d\n", ans, bestL, bestR);
    }
    return 0;
}