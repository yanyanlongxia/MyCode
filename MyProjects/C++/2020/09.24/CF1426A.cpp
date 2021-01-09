//File: CF1426A.cpp
//Author: yanyanlongxia
//Date: 2020/9/28
//
#include <bits/stdc++.h>

using namespace std;
int t,n,x;
int main() {
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d",&n,&x);
        int now=2,res=1;
        while (now<n)
        {
            res++;
            now+=x;
        }
        printf("%d\n",res);
    }
    return 0;
}
