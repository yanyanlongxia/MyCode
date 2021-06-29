//Created by yanyanlongxia on 2021/6/29
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=3e3;
int n,m;
char s[N][N];
vector<pair<int,int> >cu,nxt;
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR1895.out","w",stdout);
    int x,y;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%s",(s[i]+1));
    cu.push_back(make_pair(1,1));

    return 0;
}
