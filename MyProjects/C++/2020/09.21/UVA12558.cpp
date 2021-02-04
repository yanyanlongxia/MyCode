//File: UVA12558.cpp
//Author: yanyanlongxia
//Date: 2020/9/23
//
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#define LL long long
using namespace std;
const LL maxn = 1000;
LL kase, a, b, k, ans[maxn], v[maxn];
vector<LL>f;
LL gcd(LL a, LL b) {
    return a % b ? gcd(b, a % b) : b;
}
bool isBetter(LL n) {
    LL i = n - 1;
    for(; i >= 0; i --) if(v[i] != ans[i]) break;
    return ans[i] == -1 || v[i] < ans[i];
}
bool dfs(int maxd, int idx, LL a, LL b, LL prev_c) {
    if (idx == maxd) {
        if (a) return false;
        if (isBetter(idx))
            memcpy(ans, v, sizeof(LL) * idx);
        return true;
    }
    bool ok = false;
    for (LL c = max(prev_c + 1, (b % a ? b / a + 1 : b / a));; c++) {
        if (find(f.begin(), f.end(), c) != f.end())
            continue;
        if ((a * c - b) * (c + 1) > b * c * (maxd - idx - 1))
            break;
        v[idx] = c;
        LL na = a * c - b, nb = b * c, t = gcd(na, nb);
        if (dfs(maxd, idx + 1, na / t, nb / t, c))
            ok = true;
    }
    return ok;
}
int main() {
    cin >> kase;
    for (int K = 1; K <= kase; K++) {
        f.clear();
        cin >> a >> b >> k;
        while (k--) {
            LL x;
            cin >> x;
            f.push_back(x);
        }
        for (int maxd = 1;; maxd++) {
            memset(ans, -1, sizeof(ans));
            if (dfs(maxd, 0, a, b, 0)) break;
        }
        cout << "Case " << K << ": " << a << "/" << b;
        for (int i = 0; ans[i] != -1; i++)
            cout << (i ? "+" : "=") << "1/" << ans[i];
        cout << endl;
    }
}