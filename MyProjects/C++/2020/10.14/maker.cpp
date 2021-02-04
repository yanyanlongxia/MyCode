//File: maker.cpp
//Author: yanyanlongxia
//Date: 2020/10/14
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=1e5,M=1e9;
inline int random(int n)
{
    return abs((ll)rand()*rand()%n);
}
int main() {
    //freopen("maker.in","r",stdin);
    //freopen("maker.out","w",stdout);
    srand(time(0));
    int n=random(N),m=random(N);
    printf("%d %d\n",n,m);
    for (int i=1;i<=n;i++)
    {
        int x=random(M);
        printf("%d ",x);
    }
    puts("");
    for (int i=1;i<=m;i++)
    {
        int opt=random(2)+1;
        int x=random(n),y=random(n);
        printf("%d %d %d\n",opt,x,y);
    }
    puts("");
    return 0;
}
