//Created by yanyanlongxia on 2021/5/2
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e6+10;
int t,n,bel[N],coln;
ll str[N];

bool cmp(int a,int b){
    return a>b;
}
int main() {
    //freopen("data.in","r",stdin);
    //freopen("CF1519C.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        coln=0;
        scanf("%d",&n);
        vector <vector<ll> > col(n+1);
        for(int i=1;i<=n;i++) {
            scanf("%d",&bel[i]);
            coln=max(coln,bel[i]);
        }
        for(int i=1;i<=coln;i++)
            col[i].push_back(0);
        for(int i=1;i<=n;i++){
            scanf("%lld",&str[i]);
            col[bel[i]].push_back(str[i]);
        }
        for(int i=1;i<=coln;i++){
            sort(col[i].begin()+1,col[i].end(),cmp);
            for(int j=1;j<col[i].size();j++)
                col[i][j]=col[i][j-1]+col[i][j];
        }
        for(int i=1;i<=n;i++) {
            ll res=0;
            for (int j = 1; j <= coln; j++) {
                int x=(col[j].size()-1)/i;
                res+=col[j][x*i];
            }
            printf("%lld ",res);
        }
        puts("");
    }
    return 0;
}
