//File: P6702.cpp
//Author: yanyanlongxia
//Date: 2020/9/17
//
#include <bits/stdc++.h>

using namespace std;
int n;
int main() {
    scanf("%d",&n);
    if (n==4 || n==7)
    {
        puts("-1");
        return 0;
    }
    int t=n%5;
    if (t==0)
    {
        printf("%d\n",n/5);
        return 0;
    }
    if (t==1)
    {
        printf("%d\n",n/5+1);
        return 0;
    }
    if (t==2)
    {
        printf("%d\n",n/5+2);
        return 0;
    }
    if (t==3)
    {
        printf("%d\n",n/5+1);
        return 0;
    }
    if (t==4)
    {
        printf("%d\n",n/5+2);
        return 0;
    }
    return 0;
}
