//File: T132682.cpp
//Author: yanyanlongxia
//Date: 2020/8/4
//
#include <bits/stdc++.h>
const int dx[4]={-1,0,0,1},dy[4]={0,1,-1,0};
using namespace std;
int n,m,last,cnt,gn[500][500];
char row[500][500];
bool graph[500][500],mianyi[500][500];
int main() {
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%s",(row[i]+1));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            graph[i][j]=row[i][j]-'0';
            if(graph[i][j])
                last++;
        }
    while(last!=0)
    {
        cnt++;
        memset(gn,0,sizeof(gn));
        memset(mianyi,0,sizeof(mianyi));
        int now=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            {
                if(graph[i][j])
                {
                    mianyi[i][j]=1;
                    for(int k=0;k<4;k++)
                    {
                        pair<int,int> to=make_pair(i+dx[k],j+dy[k]);
                        if(!mianyi[to.first][to.second])
                        {
                            gn[to.first][to.second]++;
                        }
                    }
                }
            }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            {
                if(gn[i][j]>=2)
                {
                    graph[i][j]=1;
                    now++;
                }
                else
                    graph[i][j]=0;
            }
        last=now;
        if(cnt>2000)
        {
            printf("INF\n");
            return 0;
        }
    }
    printf("%d\n",cnt);
    return 0;
}