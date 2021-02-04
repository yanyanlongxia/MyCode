//File: P4973.cpp
//Author: yanyanlongxia
//Date: 2020/8/16
//
#include<bits/stdc++.h>
using namespace std;
long double ans, t;
string s;
int q, a, len;
int main() {
    cin >> q;
    while (q--) {
        cin >> a >> s;
        len = s.size();
        t = log10(a);
        ans = 0;
        for (int i = 0; i < len; ++i)
            ans += log10(s[i] - 48) + t * i;
        cout << (long long) ans + 1 << endl;
    }
    return 0;
}