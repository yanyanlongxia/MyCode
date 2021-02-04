//
// Created by admin on 2020/6/20.
//
#include <bits/stdc++.h>
using namespace std;
int a[1000000],n,m;
int ask(int x)  //询问操作
{
    int ans=0;
    for(;x;x -= x & -x)  //lowbit()运算
        ans+=a[x];  //累计求和
    return ans;
}
void add(int x,int d) //单点修改
{
    for(;x<=n;x += x & -x)
        a[x]+=d;
}
int main()
{
    int s,x,y;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        add(i,x);
    }
    for(int i=1;i<=m;i++)
    {
        cin>>s>>x>>y;
        if(s==1)
            add(x,y);
        else
            printf("%d\n",ask(y)-ask(x-1));
    }
    return 0;
}
