//
// Created by admin on 2020/7/11.
//
#include <bits/stdc++.h>
using namespace std;
int n,f[105000][40],m;
double lo[105000];
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
    while (isdigit(ch)){x=x*10+ch-48;ch=getchar();}
    return x*f;
}
int main()
{
    int x,y;
    n=read();m=read();
    for(int i=1;i<=n;i++)
    {
        f[i][0]=read();
        lo[i]=log(i);
    }
    int t=lo[n]/lo[2]+1;    //换底公式
    for (int j = 1; j < t; ++j)  //预处理
        for(int i=1;i<=n-(1<<j)+1;i++)
            f[i][j]=max(f[i][j-1],f[i+(1<<(j-1))][j-1]);//相当于是状态转移方程
    while(m--)
    {
        x=read();y=read();
        int k=lo[y-x+1]/lo[2];
        printf("%d\n",max(f[x][k],f[y-(1<<k)+1][k]));
    }
    return 0;
}
