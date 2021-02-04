//File: path.cpp
//Author: yanyanlongxia
//Date: 2020/10/8
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k,st;
struct node
{
    int dp,num;
}ver[5000005];
vector<int>son[5000005];
char choi[5000005];
bool cmp(int a,int b)
{
    return ver[a].num<ver[b].num;
}
void dfs1(int x)
{
    for (int i=0;i<son[x].size();i++)
    {
        int y=son[x][i];
        if (!ver[y].dp)
            dfs1(y);
        ver[x].dp=max(ver[x].dp,ver[y].dp+1);
        if (ver[x].dp>=2*n-1-k&&ver[x].num<ver[st].num)
            st=x;
    }
}
void dfs2(int x,int ch)
{
    choi[ch]=ver[x].num;
    if (ch==2*n-1-k)
        return;
    sort(son[x].begin(),son[x].end(),cmp);
    for (int i=0;i<son[x].size();i++)
    {
        int y=son[x][i];
        if (ver[y].dp>=2*n-1-k-ch)
        {
            dfs2(y,ch+1);
            return;
        }
    }
}
#define getid(i,j) ((i-1)*n+j)
int main() {
    freopen("path.in","r",stdin);
    freopen("path.out","w",stdout);
    scanf("%d%d",&n,&k);
    if (k>=2*n-1)
    {
        for (int i=1;i<=2*n-1;i++)
            printf("%c",'a');
        puts("");
        return 0;
    }
    char tmp[5000];
    for (int i=1;i<=n;i++)
    {
        scanf("%s",(tmp+1));
        for (int j=1;j<=n;j++)
        {
            int now=getid(i,j);
            ver[now].num=tmp[j];
            if (i!=1)
                son[getid(i-1,j)].push_back(now);
            if (j!=1)
                son[getid(i,j-1)].push_back(now);
        }
    }
    ver[0].num=0x3f3f3f3f;
    dfs1(1);
    dfs2(st,1);
    for (int i=1;i<=k;i++)
        printf("a");
    for (int i=1;i<=2*n-1-k;i++)
        printf("%c",choi[i]);
    puts("");
    return 0;
}
