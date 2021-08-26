//Created by yanyanlongxia on 2021/8/12
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=501;
int n,m,T,ans;
bool fl[5][N][N];
bool check(int t,int a,int b){
    for(int i=1;i<=n;i++){
        if(fl[t][i][a]&&fl[t][i][b])
            return true;
    }
    return false;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR115.out","w",stdout);
    int x,y;
    scanf("%d",&T);
    for(int t=1;t<=T;t++){
        ans=0;
        scanf("%d%d",&n,&m);
        for(int i=1;i<=m;i++){
            scanf("%d%d",&x,&y);
            fl[t][x][y]=true;
        }
        for(int i=1;i<=n;i++)
            fl[t][i][i]=true;
        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++)
                for(int j=1;j<=n;j++){
                    fl[t][i][j]|=fl[t][i][k]&fl[t][k][j];
                }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
                if (check(t,i,j)) {
                    ans++;
                    //printf("%d %d\n",i,j);
                }
        }
        printf("%d\n",ans);
    }
    return 0;
}
