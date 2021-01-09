//
// Created by admin on 2020/7/22.
//
#include <bits/stdc++.h>
#define N 304
#define V 90006
#define TIME 304
#define inf 0x3f3f3f3f
#define M 100007
using namespace std;
inline int wread(){
    char c=getchar ();int flag=1,wans=0;
    while (c<'0'||c>'9'){if (c=='-') flag=-1;c=getchar ();}
    while (c>='0'&&c<='9'){wans=wans*10+c-'0';c=getchar ();}
    return wans*=flag;
}
int n,m,dp[N][V],pr[M],maxtime,maxv;
struct node {int dan,val,tim;}a[N];
struct node2 {int tim,mon,hao;}b[M];
bool e666 (node x,node y){return x.tim<y.tim;}
int sav[TIME];//时间为i时对应的个数值
bool e555 (node2 x,node2 y){
    if (x.tim==y.tim)
        return x.mon>y.mon;
    return x.tim<y.tim;
}
int main ()
{
    n=wread();m=wread();
    for (int i=1;i<=n;++i)
        a[i].dan=wread(),a[i].val=wread(),a[i].tim=wread(),maxtime=max(maxtime,a[i].tim),maxv+=a[i].val;
    sort (a+1,a+n+1,e666);//开业时间排序
    memset (dp,inf,sizeof dp);
    for (int i=0;i<=n;++i)
        dp[i][0]=0;//初始化操作
    for (int i=1;i<=n;++i)
        for (int j=1;j<=maxv;++j){
            if (a[i].val<=j)
                dp[i][j]=min(dp[i-1][j-a[i].val]+a[i].dan,dp[i][j]);
            dp[i][j]=min(dp[i][j],dp[i-1][j]);
        }
    //对于不同的时间 我应该找前几个物品
    // sav[i]=y表示询问i时间,满足要求 (开业时间 <= i) 的 在前 y 个
    for (int i=1;i<=n;++i){
        int tim=a[i].tim;
        sav[tim]=i;
    }
    //可能会存在 询问时间 不在 开业时间的整点上 的
    // e.g 开业时间有 3 8 105
    //     查询时间有 5 10 300
    for (int i=1;i<=maxtime;++i)
        if (!sav[i])
            sav[i]=sav[i-1];
    //询问的离线处理
    for (int i=1;i<=m;++i){
        int tim=wread(),mon=wread();
        if (tim>maxtime)
            tim=maxtime;
        int num=sav[tim];
        b[i].tim=num;b[i].mon=mon,b[i].hao=i;
    }
    sort (b+1,b+m+1,e555);//先按时间从小到大，再按钱数从大到小
    int zhi=1;//表示当前在询问的哪一个位置 (询问已经排序)
    for (int i=0;i<=n;++i)
    {
        if (b[zhi].tim!=i)
            continue;
        bool F=true;
        for (int j=maxv;j>=0;--j)
        {
            while (b[zhi].mon>=dp[i][j])
            {//记得写循环!!
                pr[b[zhi].hao]=j,zhi++;
                if (b[zhi].tim!=i)
                {
                    F=false;
                    break;
                }
            }
            if (!F)
                break;
        }
        if (F)
            while (b[zhi].tim==i)
                zhi++;
    }
    for (int i=1;i<=m;++i)
        printf("%d\n",pr[i]);
    return 0;
}