//File: CF1399D.cpp
//Author: yanyanlongxia
//Date: 2020/8/5
//
#include<bits/stdc++.h>
using namespace std;
queue<int> q0,q1;
int b[200050];
int tot;
string s;
int main() {
    int n, t;
    scanf("%d", &t);
    while (t--) {
        while (!q0.empty())
            q0.pop();
        while (!q1.empty())
            q1.pop();
        tot = 0;
        scanf("%d", &n);
        cin >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] == '0') {
                if (q1.empty())
                    q0.push(++tot), b[j] = tot;
                else {
                    b[j] = q1.front();
                    q0.push(b[j]);
                    q1.pop();
                }
            } else {
                if (q0.empty())
                    q1.push(++tot), b[j] = tot;
                else {
                    b[j] = q0.front();
                    q1.push(b[j]);
                    q0.pop();
                }
            }
        }
        printf("%d\n", tot);
        for (int i = 0; i < n; i++)
            printf("%d ", b[i]);
        puts("");
    }
    return 0;
}