//File: P6559.cpp
//Author: yanyanlongxia
//Date: 2020/9/18
//
#include <bits/stdc++.h>

using namespace std;
set<pair<int,int> >s;
int n,k,x[1000005],y[1000005],ans;
const int dx[4]={-1,0,0,1},dy[4]={0,1,-1,0};
int main() {
    scanf("%d%d",&n,&k);
    for (int i=1;i<=k;i++)
    {
        scanf("%d%d",&x[i],&y[i]);
        s.insert(make_pair(x[i],y[i]));
    }
    for (int i=1;i<=k;i++)
    {
        for (int j=0;j<4;j++)
            if (s.find(make_pair(x[i]+dx[j],y[i]+dy[j]))!=s.end())
                ans++;
    }
    ans/=2;
    printf("%d\n",ans);
    return 0;
}
