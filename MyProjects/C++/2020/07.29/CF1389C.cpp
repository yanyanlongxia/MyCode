//
// Created by admin on 2020/7/31.
//
#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int cnt[10], ans = 0;
        cin >> s;
        memset(cnt, 0, sizeof(cnt));
        for (int i=0; i<s.length(); ++i)
            ++cnt[s[i] - '0'];
        for (int i=0; i<=9; ++i)
            ans = max(ans, cnt[i]);
        for (int i=0; i<=9; ++i)
            for (int j=i+1; j<=9; ++j) {
                if (min (cnt[i], cnt[j]) == 0) {
                    continue;
                }
                int count = 0;
                for (int k=0; k<s.length(); ++k) {
                    if(count % 2 == 0) {
                        if (s[k] == i + '0') {
                            ++count;
                        }
                    }
                    if (count % 2) {
                        if (s[k] == j + '0') {
                            ++count;
                        }
                    }
                }
                if (count % 2 == 0)
                    ans = max (ans, count);
                count = 0;
                for (int k=0; k<s.length(); ++k) {
                    if(count % 2 == 0) {
                        if (s[k] == j + '0') {
                            ++count;
                        }
                    }
                    if (count % 2) {
                        if (s[k] == i + '0') {
                            ++count;
                        }
                    }
                }
                if (count % 2 == 0)
                    ans = max (ans, count);
            }
        cout << min (s.length() - ans, s.length() - 2) << endl;
    }
}