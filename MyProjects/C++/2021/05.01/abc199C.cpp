//Created by yanyanlongxia on 2021/5/1
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
int n,m,ma[N];
bool zh=true,nz[N];
char st[N];
vector<pair<int,int> >sw;
int main() {
    //freopen("data.in", "r", stdin);
    //freopen("abc199C.out","w",stdout);
    scanf("%d", &n);
    scanf("%s", (st + 1));
    scanf("%d", &m);
    int opt, x, y;
    while (m--) {
        scanf("%d", &opt);
        if (opt == 1) {
            scanf("%d%d", &x, &y);
            sw.push_back(make_pair(x, y));
            nz[sw.size()-1]=zh;
        } else {
            scanf("%d%d", &x, &y);
            zh ^= 1;
        }
    }
    for(int i=1;i<=n;i++){
        ma[i]=i+n;
        ma[i+n]=i;
    }
    if (!zh) {
        for (int i = 1; i <= n; i++) {
            swap(st[i], st[i + n]);

        }
    }
    for(int i=0;i<sw.size();i++)
    {
        x=sw[i].first,y=sw[i].second;
        if(nz[i]^zh)
            x=ma[x],y=ma[y];
        swap(st[x],st[y]);
    }
    printf("%s\n",(st+1));
    return 0;
}
