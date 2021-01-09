//File: UVA437.cpp
//Author: yanyanlongxia
//Date: 2020/9/23
//
#include <bits/stdc++.h>

using namespace std;
int n,x[1005],y[1005],z[1005],ans,dp[1005],head[100005],nxt[100005],edge[100005],ver[100005],tot;
inline void add(int a,int b,int c)
{
    ver[++tot]=b;
    nxt[tot]=head[a];
    edge[tot]=c;
    head[a]=tot;
}
int dfs(int a)
{
    if (dp[a])
        return dp[a];
    for (int i=head[a];i;i=nxt[i])
        dp[a]=max(dp[a],dfs(ver[i])+edge[i]);
    return dp[a];
}
int main() {
    int t=0;
    while (true)
    {
        t++;
        memset(ver,0,sizeof(ver));
        memset(head,0,sizeof(ver));
        memset(nxt,0,sizeof(nxt));
        memset(edge,0,sizeof(edge));
        tot=0;
        ans=0;
        memset(dp,0,sizeof(dp));
        scanf("%d",&n);
        if (n==0)
            break;
        for (int i=1;i<=n;i++)
            scanf("%d%d%d",&x[i],&y[i],&z[i]);
        for (int i=1;i<=n;i++)//xy xz yz yx zx zy
                              //0  1   2  3  4  5
            for (int j=1;j<=n;j++)
            {
                if (x[i]>x[j] && y[i]>y[j])
                    add(i,j,z[i]);
                if (x[i]>x[j] && y[i]>z[j])
                    add(i,j+n,z[i]);
                if (x[i]>y[j] && y[i]>z[j])
                    add(i,j+2*n,z[i]);
                if (x[i]>y[j] && y[i]>x[j])
                    add(i,j+3*n,z[i]);
                if (x[i]>z[j] && y[i]>x[j])
                    add(i,j+4*n,z[i]);
                if (x[i]>z[j] && y[i]>y[j])
                    add(i,j+5*n,z[i]);
                if (x[i]>x[j] && z[i]>y[j])
                    add(i+n,j,y[i]);
                if (x[i]>x[j] && z[i]>z[j])
                    add(i+n,j+n,y[i]);
                if (x[i]>y[j] && z[i]>z[j])
                    add(i+n,j+2*n,y[i]);
                if (x[i]>y[j] && z[i]>x[j])
                    add(i+n,j+3*n,y[i]);
                if (x[i]>z[j] && z[i]>x[j])
                    add(i+n,j+4*n,y[i]);
                if (x[i]>z[j] && z[i]>y[j])
                    add(i+n,j+5*n,y[i]);
                if (y[i]>x[j] && z[i]>y[j])
                    add(i+2*n,j,x[i]);
                if (y[i]>x[j] && z[i]>z[j])
                    add(i+2*n,j+n,x[i]);
                if (y[i]>y[j] && z[i]>z[j])
                    add(i+2*n,j+2*n,x[i]);
                if (y[i]>y[j] && z[i]>x[j])
                    add(i+2*n,j+3*n,x[i]);
                if (y[i]>z[j] && z[i]>x[j])
                    add(i+2*n,j+4*n,x[i]);
                if (y[i]>z[j] && z[i]>y[j])
                    add(i+2*n,j+5*n,x[i]);
                if (y[i]>x[j] && x[i]>y[j])
                    add(i+3*n,j,z[i]);
                if (y[i]>x[j] && x[i]>z[j])
                    add(i+3*n,j+n,z[i]);
                if (y[i]>y[j] && x[i]>z[j])
                    add(i+3*n,j+2*n,z[i]);
                if (y[i]>y[j] && x[i]>x[j])
                    add(i+3*n,j+3*n,z[i]);
                if (y[i]>z[j] && x[i]>x[j])
                    add(i+3*n,j+4*n,z[i]);
                if (y[i]>z[j] && x[i]>y[j])
                    add(i+3*n,j+5*n,z[i]);
                if (z[i]>x[j] && x[i]>y[j])
                    add(i+4*n,j,y[i]);
                if (z[i]>x[j] && x[i]>z[j])
                    add(i+4*n,j+n,y[i]);
                if (z[i]>y[j] && x[i]>z[j])
                    add(i+4*n,j+2*n,y[i]);
                if (z[i]>y[j] && x[i]>x[j])
                    add(i+4*n,j+3*n,y[i]);
                if (z[i]>z[j] && x[i]>x[j])
                    add(i+4*n,j+4*n,y[i]);
                if (z[i]>z[j] && x[i]>y[j])
                    add(i+4*n,j+5*n,y[i]);
                if (z[i]>x[j] && y[i]>y[j])
                    add(i+5*n,j,x[i]);
                if (z[i]>x[j] && y[i]>z[j])
                    add(i+5*n,j+n,x[i]);
                if (z[i]>y[j] && y[i]>z[j])
                    add(i+5*n,j+2*n,x[i]);
                if (z[i]>y[j] && y[i]>x[j])
                    add(i+5*n,j+3*n,x[i]);
                if (z[i]>z[j] && y[i]>x[j])
                    add(i+5*n,j+4*n,x[i]);
                if (z[i]>z[j] && y[i]>y[j])
                    add(i+5*n,j+5*n,x[i]);
            }
        for (int i=1;i<=n;i++)
        {
            if (head[i]==0)
                dp[i]=z[i];
            if (head[i+n]==0)
                dp[i+n]=y[i];
            if (head[i+2*n]==0)
                dp[i+2*n]=x[i];
            if (head[i+3*n]==0)
                dp[i+3*n]=z[i];
            if (head[i+4*n]==0)
                dp[i+4*n]=y[i];
            if (head[i+5*n]==0)
                dp[i+5*n]=x[i];
        }
        for (int i=1;i<=6*n;i++)
            ans=max(ans,dfs(i));
        printf("Case %d: maximum height = %d\n",t,ans);
    }
    return 0;
}
