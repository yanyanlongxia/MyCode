//File: P2044.cpp
//Author: yanyanlongxia
//Date: 2020/9/30
//[NOI2012]随机数生成器
#include <bits/stdc++.h>
#define int long long
using namespace std;
int m,n,a,c,g;
int power(int x,int y)
{
    int res=0;
    for (;y;y>>=1ll)
    {
        if (y & 1ll)
            res=(res+x)%m;
        x=(x+x)%m;
    }
    return res;
}
struct matrix
{
    int num[2][2];
    matrix()
    {
        memset(num,0, sizeof(num));
    }
    void clear()
    {
        num[0][0]=num[1][1]=1;
        num[1][0]=num[0][1]=0;
    }
    matrix operator *(matrix x)const
    {
        matrix t;
        for (int i=0;i<2;i++)
            for (int j=0;j<2;j++)
                for (int k=0;k<2;k++)
                {
                    t.num[i][j]+=power(num[i][k],x.num[k][j]);
                    t.num[i][j]%=m;
                }
        return t;
    }
    matrix operator ^(int k)const
    {
        matrix t,now;
        for (int i=0;i<2;i++)
            for (int j=0;j<2;j++)
                now.num[i][j]=num[i][j];
        t.clear();
        for (;k;k>>=1ll)
        {
            if (k&1ll)
                t=t*now;
            now=now*now;
        }
        return t;
    }
};
void printm(matrix x)
{
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
            cout<<x.num[i][j]<<" ";
        puts("");
    }
}
signed main() {
    scanf("%lld%lld%lld",&m,&a,&c);
    matrix now;
    scanf("%lld",&now.num[0][0]);
    now.num[1][0]=c;
    scanf("%lld%lld",&n,&g);
    matrix base;
    base.num[0][0]=a;base.num[1][0]=0;base.num[0][1]=1;base.num[1][1]=1;
    base=base^n;
    now=base*now;
    printf("%lld\n",now.num[0][0]%g);
    return 0;
}
