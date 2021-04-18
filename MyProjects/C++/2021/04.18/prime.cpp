//Created by yanyanlongxia on 2021/4/18
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=5e5,MN=1e5;
int cnt,prime[N];
bool visited[N];
int main() {
    freopen("prime.out","w",stdout);
    for(int i=2;i<=MN;i++){
        if(!visited[i]){
            prime[++cnt]=i;
        }
        for(int j=1;j<=cnt&&i*prime[j]<=MN;j++){
            visited[i* prime[j]]=true;
            if(i%prime[j]==0)
                break;
        }
    }
    printf("%d\n",cnt);
    for(int i=1;i<=cnt;i++)
        printf("%d ",prime[i]);
    puts("");
    return 0;
}
