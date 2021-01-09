//File: P1918.cpp
//Author: yanyanlongxia
//Date: 2020/9/17
//
#include <bits/stdc++.h>

using namespace std;
int n,a[1000005],q;
pair<int,int>pos[1000005];
int main() {
    int x;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        pos[i].first=a[i];
        pos[i].second=i;
    }
    sort(pos+1,pos+n+1);
    scanf("%d",&q);
    for (int i=1;i<=q;i++)
    {
        scanf("%d",&x);
        int l=1,r=n,mid;
        while (l<r)
        {
            mid=l+r>>1;
            if (pos[mid].first>=x)
                r=mid;
            else
                l=mid+1;
        }
        if (pos[l].first!=x)
        {
            puts("0");
            continue;
        }
        printf("%d\n",pos[l].second);
    }
    return 0;
}
