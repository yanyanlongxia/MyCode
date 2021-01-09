//File: CF1399E1.cpp
//Author: yanyanlongxia
//Date: 2020/8/7
//
#include <bits/stdc++.h>
using namespace std;
vector<int> w, cnt;
vector<vector<pair<int, int>>> g;
long long getdiff(int i) {
    return w[i] * 1ll * cnt[i] - (w[i] / 2) * 1ll * cnt[i];
}
void dfs(int v, int p = -1) {
    if (g[v].size() == 1) cnt[p] = 1;
    for (auto [to, id] : g[v]) {
        if (id == p) continue;
        dfs(to, id);
        if (p != -1)
            cnt[p] += cnt[id];
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long s;
        cin >> n >> s;
        w = cnt = vector<int>(n - 1);
        g = vector<vector<pair<int, int>>>(n);
        for (int i = 0; i < n - 1; ++i) {
            int x, y;
            cin >> x >> y >> w[i];
            --x, --y;
            g[x].push_back({y, i});
            g[y].push_back({x, i});
        }
        dfs(0);
        set<pair<long long, int>> st;
        long long cur = 0;
        for (int i = 0; i < n - 1; ++i) {
            st.insert({getdiff(i), i});
            cur += w[i] * 1ll * cnt[i];
        }
        cerr << cur << endl;
        int ans = 0;
        while (cur > s) {
            int id = st.rbegin()->second;
            st.erase(prev(st.end()));
            cur -= getdiff(id);
            w[id] /= 2;
            st.insert({getdiff(id), id});
            ++ans;
        }
        cout << ans << endl;
    }
    return 0;
}