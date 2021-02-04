//File: T141165.cpp
//Author: yanyanlongxia
//Date: 2020/8/8
//
#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,ans;
int main() {
    scanf("%d%d%d%d", &a, &b, &c, &d);
    ans = min(c + d, 2 * d);
    if (a == 0 && b == 0)ans = min(ans, 0);
    if (a == b)ans = min(ans, c);
    if (a == 0 || b == 0)ans = min(ans, d);
    printf("%d\n", ans);
    return 0;}