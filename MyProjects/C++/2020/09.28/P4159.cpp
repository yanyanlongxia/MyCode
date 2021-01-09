//File: P4159.cpp
//Author: yanyanlongxia
//Date: 2020/9/30
//[SCOI2009] 迷路
#include <bits/stdc++.h>

using namespace std;
int n,t,m;
struct matrix
{
    int sr,sc;
    int num[105][105];
    matrix(int a,int b)
    {
        sr=a;
        sc=b;
        memset(num,0, sizeof(num));
    }
    void clear()
    {
        memset(num,0, sizeof(num));
        for (int i=1;i<=sr;i++)
            num[i][i]=1;
    }
    matrix operator * (matrix x)const
    {
        matrix res(x.sr,x.sc);
        for (int i=1;i<=x.sr;i++)
            for (int j=1;j<=x.sc;j++)
                for (int k=1;k<=sc;k++)
                {
                    res.num[i][j]+=num[i][k]*x.num[k][j];
                    res.num[i][j]%=2009;
                }
        return res;
    }
    matrix operator ^ (int k)const
    {
        matrix res(sr,sc),now(sr,sc);
        res.clear();
        for (int i=1;i<=sr;i++)
            for (int j=1;j<=sc;j++)
                now.num[i][j]=num[i][j];
        for (;k;k>>=1)
        {
            if (k&1)
                res=res*now;
            now=now*now;
        }
        return res;
    }
};
inline int getpos(int i,int j)
{
    return i+n*j;
}
int main() {
    int x;
    scanf("%d%d",&n,&t);
    m=n*9;
    matrix now(m,m);
    for (int i=1;i<=n;i++)
        for (int j=1;j<=8;j++)
            now.num[getpos(i,j)][getpos(i,j-1)]=1;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
        {
            scanf("%1d",&x);
            if (x)
                now.num[i][getpos(j,x-1)]=1;
        }
    now=now^t;
    printf("%d\n",now.num[1][n]);
    return 0;
}
