//
// Created by AsianBike on 2020-05-02.
//
#include<bits/stdc++.h>

#define REP(i,a,b) for(int i=a;i<=b;++i)
#define DREP(i,a,b) for(int i=a;i>=b;--i)
typedef long long ll;
using namespace std;
const int maxn=2500+10;
const int inf=0x3f3f3f3f;
int n,k,s[maxn],p[maxn],dfn[maxn],cnt_dfn,sz[maxn];
int beg[maxn],to[maxn<<1],las[maxn<<1],cnte=1;
double dp[maxn][maxn],val[maxn];

void add(int u,int v){
    las[++cnte]=beg[u]; beg[u]=cnte; to[cnte]=v;
    las[++cnte]=beg[v]; beg[v]=cnte; to[cnte]=u;
}

void dfs(int u,int f){
    dfn[++cnt_dfn]=u;
    sz[u]=1;

    for(int i=beg[u];i;i=las[i]){
        if(to[i]==f)continue;
        dfs(to[i],u);
        sz[u]+=sz[to[i]];
    }
}

bool judge(double f){
    REP(i,1,n)
        val[i]=(double)p[i]-f*s[i];

    REP(i,1,n+2)
        REP(j,1,k+1)
            dp[i][j]=-inf;

    DREP(i,n+1,1)
        REP(j,1,k+1){
            dp[i][j]=max(dp[i][j],dp[i+1][j-1]+val[dfn[i]]);
            dp[i][j]=max(dp[i][j],dp[i+sz[dfn[i]]][j-1]+val[dfn[i]]);
            dp[i][j]=max(dp[i][j],dp[i+sz[dfn[i]]][j]);
        }

    return dp[1][k+1]>=0;
}

void init(){
    scanf("%d%d",&k,&n);
    int f;

    REP(i,1,n)
        scanf("%d%d%d",&s[i],&p[i],&f),add(f,i);

    dfs(0,0);
}

void work(){
#define mid ((l+r)/2)
    double l=0,r=1e8;
    while(r-l>1e-4){
        if(judge(mid)) l=mid;
        else  r=mid;
        //cerr<<l<<" "<<r<<endl;
    }

    printf("%.3lf\n",l);
}

int main(){
    init();
    work();
    return 0;
}

