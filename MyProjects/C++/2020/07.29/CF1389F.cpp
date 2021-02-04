//
// Created by admin on 2020/8/1.
//
#include <bits/stdc++.h>
using namespace std;
const int MAXN=2e5+50;
int n,l[MAXN], r[MAXN], c[MAXN];
vector <pair<int, pair<int, int>>>v;
void read_input()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i] >> c[i];
        c[i]--;
        v.push_back({l[i], {0, i}});
        v.push_back({r[i], {1, i}});
    }
    sort(v.begin(), v.end());
}
set <pair<int, int>> st[2];
void solve()
{
    int ans = 0;
    for(auto x : v)
    {
        int i = x.second.second;
        int type = c[i];
        int ot = c[i] ^ 1;
        if(x.second.first)
        {
            if(st[type].count({x.first, i}) && !st[ot].empty())
            {
                ans++;
                st[ot].erase(st[ot].begin());
            }
            if(st[type].count({x.first, i}))
                st[type].erase({r[i], i});
        }
        else
            st[type].insert({r[i], i});
    }
    cout << n - ans << "\n";
}
int main()
{
    read_input();
    solve();
    return 0;
}
