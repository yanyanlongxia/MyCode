//Created by yanyanlongxia on 2021/8/26
//
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e4;
int n,m,mat[N][N];
int main() {
    freopen("data.in","r",stdin);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            scanf("%d",&mat[i][j]);
        }
    printf("%d ",mat[1][1]);
    for(int i=1;i<=100;i++){
        for(int v=1;v<=n;v++)
            for(int u=1;u<=n;u++){
                mat[u][v]=mat[u][v]^mat[u][v+1]^mat[u+1][v]^mat[u+1][v+1];
            }
        printf("%d ",mat[1][1]);
    }
    return 0;
}
