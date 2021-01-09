//File: P1932.cpp
//Author: yanyanlongxia
//Date: 2020/10/2
//
#include <bits/stdc++.h>
#define radix 100000000
using namespace std;
struct bint
{
    long long num[100005];
    bint()
    {
        memset(num,0, sizeof(num));
    }
    void print()
    {
        long long w=num[0];
        printf("%lld",num[w]);
        for (long long i=w-1;w>=1;w--)
            printf("%08lld",num[i]);
        puts("");
    }
    bint operator + (bint b)const
    {
        bint c;
        c.num[0]=max(num[0],b.num[0]);
        long long add=0;
        for (long long i=1;i<=c.num[0];i++)
        {
            c.num[i]=num[i]+b.num[i]+add;
            add=c.num[i]%radix;
            c.num[i]/=radix;
        }
        if (add)
            c.num[++c.num[0]]=add;
        return c;
    }

};
int main() {

}
