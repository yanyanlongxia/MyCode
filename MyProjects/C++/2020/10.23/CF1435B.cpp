//File: CF1435B.cpp
//Author: yanyanlongxia
//Date: 2020/10/25
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=3e6;
int t,n,m;
struct pai{
    int first,second,ind;
    bool operator < (pai b)const{
        if (first==b.first)
            return second<b.second;
        return first<b.first;
    }
};

pai buc[N];
int main() {
    int x,y;
    freopen("data.in","r",stdin);
    //freopen("CF1435B.out","w",stdout);
    scanf("%d",&t);
    for (int i=1;i<N;i++)
        buc[i].ind=i;
    while (t--){
        for (int i=1;i<=n;i++)
            for (int j=1;j<=m;j++){
                buc[(i-1)*m+j].first=buc[(i-1)*m+j].second=0;
                buc[(i-1)*m+j].ind=(i-1)*m+j;
            }
        scanf("%d%d",&n,&m);
        for (int i=1;i<=n;i++)
            for (int j=1;j<=m;j++){
                scanf("%d",&x);
                buc[x].second=j;
            }
        for (int i=1;i<=m;i++)
            for (int j=1;j<=n;j++)
            {
                scanf("%d",&x);
                buc[x].first=j;
            }
        sort(buc+1,buc+1+n*m);
        for (int i=1;i<=n;i++) {
            for (int j = 1; j <= m; j++) {
                printf("%d ",buc[(i-1)*m+j].ind);
            }
            puts("");
        }
    }
    return 0;
}
