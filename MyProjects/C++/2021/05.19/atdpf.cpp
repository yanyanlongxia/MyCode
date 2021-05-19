//Created by yanyanlongxia on 2021/5/19
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=4e3;
int n,m,dp[N][N];
char s[N],t[N];
char res[N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("atdpf.out","w",stdout);
    scanf("%s",(s+1));
    scanf("%s",(t+1));
    n=strlen(s+1);
    m=strlen(t+1);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            if(s[i]==t[j]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    int i=n,j=m;
    while (true){
        if(dp[i][j]==0)
            break;
        if(s[i]==t[j]){
            res[dp[i][j]]=s[i];
            if(dp[i-1][j]==dp[i][j]-1){
                i--;
            }else{
                if(dp[i][j-1]==dp[i][j]-1)
                    j--;
                else
                    i--,j--;
            }
        }else{
            if(dp[i-1][j]==dp[i][j]){
                i--;
            }else{
                if(dp[i][j-1]==dp[i][j])
                    j--;
                else
                    i--,j--;
            }
        }
    }
    for(i=1;i<=dp[n][m];i++)
        printf("%c",res[i]);
    puts("");
    return 0;
}
