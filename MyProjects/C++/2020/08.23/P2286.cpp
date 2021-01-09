//File: P2286.cpp
//Author: yanyanlongxia
//Date: 2020/9/5
//
#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
int n, ans;
set<int> s;
void find(int x) {
    set<int>::iterator left, right;
    left = --s.lower_bound(x), right = s.lower_bound(x);
    if (x - *left <= *right - x && *left != -INF) {
        ans += x - *left;
        s.erase(left);
    } else {
        ans += *right - x;
        s.erase(right);
    }
    ans %= 1000000;
}
int main() {
    scanf("%d", &n);
    int cur;
    s.insert(-INF), s.insert(INF);
    for (int i = 1; i <= n; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        if (s.size() == 2) {
            cur = a;
            s.insert(b);
        } else if (a == cur) s.insert(b);
        else find(b);
    }
    printf("%d\n", ans);
    return 0;
}