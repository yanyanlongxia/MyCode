//File: P2886.cpp
//Author: yanyanlongxia
//Date: 2020/10/4
//[USACO07NOV]Cow Relays G
#include <bits/stdc++.h>
using namespace std;
int n,t,st,ed,num[1000005],tot;
struct matrix
{
    int a[500][500];
    matrix(){
        memset(a,0, sizeof(a));
    }
    void clear()
    {
        memset(a,0x3f, sizeof(a));
    }
    matrix operator * (matrix b)const
    {
        matrix res;
        res.clear();
        for (int i=1;i<=tot;i++)
            for (int j=1;j<=tot;j++)
                for (int k=1;k<=tot;k++)
                    res.a[i][j]=min(res.a[i][j],a[i][k]+b.a[k][j]);
        return res;
    }
    matrix operator ^ (int k) const
    {
        matrix res,now;
        now.clear();
        for (int i=1;i<=tot;i++)
            for (int j=1;j<=tot;j++)
                now.a[i][j]=a[i][j];
        res=now;
        for (;k;k>>=1)
        {
            if (k&1)
                res=res*now;
            now=now*now;
        }
        return res;
    }
};
int main() {
    int x,y,z;
    matrix base;
    base.clear();
    scanf("%d %d %d %d",&n,&t,&st,&ed);
    for (int i=1;i<=t;i++)
    {
        scanf("%d %d %d",&z,&x,&y);
        if (!num[x])
            num[x]=++tot;
        if (!num[y])
            num[y]=++tot;
        x=num[x];
        y=num[y];
        base.a[x][y]=min(base.a[x][y],z);
        base.a[y][x]=min(base.a[y][x],z);
    }
    base=base ^ (n-1);
    printf("%d\n",base.a[num[st]][num[ed]]);
    return 0;
}
