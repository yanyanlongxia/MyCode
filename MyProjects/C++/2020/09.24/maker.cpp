//File: maker.cpp
//Author: yanyanlongxia
//Date: 2020/9/28
//
#include <bits/stdc++.h>

using namespace std;
int random(int n)
{
    return (long long)rand()*rand()%n;
}
int main() {
    int n = abs(random(100000));
    printf("%d\n", n);
    for (int i = 1; i <= n; i++) {
        int x = abs(random(1000000000));
        printf("%d ", x);
    }
    puts("");
    return 0;
}