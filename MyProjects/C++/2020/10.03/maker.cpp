//File: maker.cpp
//Author: yanyanlongxia
//Date: 2020/10/5
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
    srand(time(NULL));
    int n=rand()%20;
    printf("%d\n",n);
    for (int i=1;i<=n;i++)
    {
        int opt=rand()%2;
        if (opt)
            printf("c ");
        else
            printf("e ");
        int x=rand()%20;
        printf("%d\n",x);
    }
    return 0;
}
