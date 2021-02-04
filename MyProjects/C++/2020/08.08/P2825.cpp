//File: P2825.cpp
//Author: yanyanlongxia
//Date: 2020/8/10
//
#include <bits/stdc++.h>
using namespace std;
int n,m,ntot,mtot,tot,head[3000],nxt[3000],ver[3000],row[60][60],col[60][60],match[3000],ans;
bool vis[3000];
void add(int x,int y)//链式前向星加边
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
bool find(int x)//匈牙利算法
{
    for(int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if(!vis[y])
        {
            vis[y]=true;
            if(!match[y] || find(match[y]))
            {
                match[y]=x;
                return true;
            }
        }
    }
    return false;
}
int main() {
    scanf("%d%d",&n,&m);
    char s[60][60];
    bool flag=1;//注意第一次需要单开一行
    pair<int,int>last;//与动态规划的思想相似，每个点所在的抽象出的行的编号都可以由上一个有编号的点转移过来
    for(int i=1;i<=n;i++)
    {
        scanf("%s",(s[i]+1));
        for(int j=1;j<=m;j++)
        {
            if(s[i][j]=='#')//下一次另开一行（抽象意义上的行）
            {
                flag=1;
                continue;
            }
            if(flag==0)//不需要加1
            {
                if(s[i][j]!='x')
                {
                    row[i][j]=row[last.first][last.second];//row数组的意义为该点所在的抽象的行的编号
                    last=make_pair(i,j);
                }
            } else
                if(s[i][j]!='x')
                {
                    row[i][j]=row[last.first][last.second]+1;
                    ntot++;
                    last=make_pair(i,j);
                    flag=0;//当前的加处理完毕
                }
        }
        flag=1;//换行一定要加一
    }
    flag=1;
    last=make_pair(0,0);//清零，赋初值
    for(int i=1;i<=m;i++)//列的处理，与行相似，但是i与j要取反
    {
        for(int j=1;j<=n;j++)
        {
            if(s[j][i]=='#')
            {
                flag=1;
                continue;
            }
            if(flag==0)
            {
                if(s[j][i]!='x')
                {
                    col[j][i]=col[last.second][last.first];//col数组与row数组的意义相似，是列的编号
                    last=make_pair(i,j);
                }
            } else
                if(s[j][i]!='x')
                {
                    col[j][i]=col[last.second][last.first]+1;
                    mtot++;
                    last=make_pair(i,j);
                    flag=0;
                }
        }
        flag=1;
    }
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j) {
            if (s[i][j]=='*')
                add(row[i][j],col[i][j]);//加边
        }
    for (int i = 1; i <= ntot; ++i) {
        memset(vis,0,sizeof(vis));
        if(find(i))
            ans++;//统计最大匹配
    }
    printf("%d\n",ans);
    return 0;
}