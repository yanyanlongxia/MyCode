//File: byethree.cpp
//Author: yanyanlongxia
//Date: 2020/10/28
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=20;
int t,n,maxm,f[N][N],step[(1<<20)+5],ans;
vector<pair<int,int> >v;
inline bool solve(int now){
    for (int i=0;i<v.size();i++)
        if (now & (1<<i))
        {
            pair<int,int>p=v[i];
            f[p.first][p.second]=0;
            f[p.second][p.first]=1;
        }
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            for (int k=1;k<=n;k++)
                if (f[i][j]&&f[j][k]&&f[k][i])
                    return false;
    return true;
}
inline void recovery(int now){
    for (int i=0;i<v.size();i++)
        if (now & (1<<i))
        {
            pair<int,int>p=v[i];
            f[p.second][p.first]=0;
            f[p.first][p.second]=1;
        }
}
int main() {
    char ch[N+5];
    freopen("byethree.in","r",stdin);
    freopen("byethree.out","w",stdout);
    scanf("%d",&t);
    maxm=1<<20;
    for (int i=1;i<=maxm;i++)
        step[i]=step[i-(i & -i)]+1;
    while (t--){
        scanf("%d",&n);
        v.clear();
        ans=0x3f3f3f3f;
        for (int i=1;i<=n;i++){
            scanf("%s",(ch+1));
            for (int j=1;j<=n;j++)
            {
                f[i][j]=ch[j]-'0';
                if (f[i][j])
                    v.push_back(make_pair(i,j));
            }
        }
        maxm=1<<v.size();
        for (int i=0;i<maxm;i++){
            if(solve(i))
                ans=min(ans,step[i]);
            recovery(i);
        }
        printf("%d\n",ans);
    }
    return 0;
}
