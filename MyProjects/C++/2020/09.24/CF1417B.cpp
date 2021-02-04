//File: CF1417B.cpp
//Author: yanyanlongxia
//Date: 2020/9/28
//
#include <bits/stdc++.h>

using namespace std;
int t,n,m,a[1000005],bel[1000005];
map<int,pair<int,int> >p;
int main() {
    scanf("%d",&t);
    while (t--)
    {
        p.clear();
        scanf("%d%d",&n,&m);
        for (int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        p[a[1]].first=1;
        bel[1]=1;
        for (int i=2;i<=n;i++)
        {
            if (p.find(m-a[i])==p.end())
            {
                p[a[i]].first=1;
                bel[i]=1;
                continue;
            }
            int f=p[m-a[i]].first,s=p[m-a[i]].second;
            if (f>s)
            {
                bel[i]=0;
                p[a[i]].second++;
            } else
            {
                bel[i]=1;
                p[a[i]].first++;
            }
        }
        for (int i=1;i<n;i++)
            printf("%d ",bel[i]);
        printf("%d\n",bel[n]);
    }
    return 0;
}
