//Created by yanyanlongxia on 2021/8/28
//
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,-0x3f3f3f3f,sizeof(x))
using namespace std;
const int N=1000;
int mat[N][N];
int main() {
    //freopen("test3.in","r",stdin);
    //freopen("test3.out","w",stdout);
    srand(time(0));
    for(int i=4;i<=N;i++){
        for(int j=1;j<=3;j++)
            for(int k=1;k<=i;k++){
                mat[j][k]=rand()%1000;
            }
        int tp=mat[1][1];
        for(int j=1;j<=8;j++){
            for(int u=1;u<=3;u++)
                for(int v=1;v<=i;v++)
                    mat[u][v]=mat[u][v]^mat[u+1][v]^mat[u][v+1]^mat[u+1][v+1];
        }
        if(tp!=mat[1][1]){
            printf("%d\n",i);
        }
    }
    return 0;
}
