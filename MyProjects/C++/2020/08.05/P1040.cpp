//File: P1040.cpp
//Author: yanyanlongxia
//Date: 2020/8/8
//
#include <bits/stdc++.h>

using namespace std;
int n,f[32],node[32][32],mem[32][32];
int dfs(int l,int r) {
    if (l > r)//随便加的特判，好像有用
        return 1;
    if (l == r) {//单个节点的特判
        node[l][r] = l;
        return f[l];//这里是否记忆化无所谓，反正是O(1)
    }
    if (mem[l][r])//已经搜过了
        return mem[l][r];
    int ans = 0, root;
    for (int i = l; i <= r; i++) {//枚举中间节点区间DP
        int now = dfs(l, i - 1) * dfs(i + 1, r) + f[i];
        if (now > ans) {
            ans = now;
            root = i;
        }
    }
    node[l][r] = root;
    return mem[l][r] = ans;//记忆化
}
void qianxuprint(int l,int r) {//按前序遍历顺序输出
    if (l > r)
        return;
    printf("%d ", node[l][r]);
    qianxuprint(l, node[l][r] - 1);
    qianxuprint(node[l][r] + 1, r);
}
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &f[i]);
    printf("%d\n", dfs(1, n));
    qianxuprint(1, n);
    return 0;
}