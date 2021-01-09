//File: CF1391A.cpp
//Author: yanyanlongxia
//Date: 2020/8/9
//
#include <bits/stdc++.h>

using namespace std;
int t,n;
int main() {
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=n;i>=1;i--)
            printf("%d ",i);
        puts("");
    }
    return 0;
}