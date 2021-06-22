//Created by yanyanlongxia on 2021/5/21
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e5+100;
int n;
char s[N];
bool app[N];
int main() {
    int a,b;
    freopen("data.in","r",stdin);
    //freopen("YOSEQ.out","w",stdout);
    scanf("%s",(s+1));
    n=strlen(s+1);
    for(int i=1;i<=n;i++){
        int t=s[i]-'0';
        app[t]=true;
    }
    for(int i=1;i<=n-1;i++){
        int t=10*(s[i]-'0')+s[i+1]-'0';
        app[t]=true;
    }
    for(int i=1;i<=n-2;i++){
        int t=100*(s[i]-'0')+10*(s[i+1]-'0')+s[i+2]-'0';
        app[t]=true;
    }
    for(int i=1;i<=n-3;i++){
        int t=1000*(s[i]-'0')+100*(s[i+1]-'0')+10*(s[i+2]-'0')+s[i+3]-'0';
        app[t]=true;
    }
    for(int i=1;i<=n-4;i++){
        int t=10000*(s[i]-'0')+1000*(s[i+1]-'0')+100*(s[i+2]-'0')+10*(s[i+3]-'0')+s[i+4]-'0';
        app[t]=true;
    }
    for(int i=1;i<=N;i++)
        if(!app[i]){
            printf("%d\n",i);
            break;
        }
    return 0;
}
