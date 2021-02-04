//File: maker.cpp
//Author: yanyanlongxia
//Date: 2020/9/21
//
#include <bits/stdc++.h>

using namespace std;
int random(int n)
{
    return (long long)rand()*rand()%n;
}
int main() {
    srand(time(0));
    int t=abs(random(40));
    printf("%d\n",t);
    while (t--)
    {
        int n = abs(random(100000));
        printf("%d\n", n);
        for (int i = 1; i <= n; i++)
            printf("%d %d\n", random(1000000000),random(1000000000));
    }
    return 0;
}
