//Created by yanyanlongxia on 2021/5/13
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e7+10;
int n,m,nxt[N];
char s[N],t[N];
vector<int>res;
int main() {
    freopen("data.in","r",stdin);
    //freopen("P3375.out","w",stdout);
    scanf("%s",(t+1));
    scanf("%s",(s+1));
    m=strlen(t+1);
    n=strlen(s+1);
    s[n+1]='@';
    for(int i=1;i<=m;i++)
        s[n+i+1]=t[i];
    for(int i=2;i<=n+m+1;i++){
        int j=nxt[i-1];
        while (j&&s[i]!=s[j+1])
            j=nxt[j];
        if(s[i]==s[j+1])
            j++;
        nxt[i]=j;
        if(nxt[i]==n)
            res.push_back(i-2*n);
    }
    for(int i=0;i<res.size();i++)
        printf("%d\n",res[i]);
    for(int i=1;i<=n;i++)
        printf("%d ",nxt[i]);
    puts("");
    return 0;
}
