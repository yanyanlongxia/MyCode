//
// Created by admin on 2020/7/21.
//
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int p,v;
}no[100000];
int n,k;
bool check(double mid)
{
    int pre=1,de=0;
    for(int i=2;i<=n;i++)
    {
        if(no[pre].v==no[i].v)
            continue;
        double t=(no[i].p-no[pre].p)/(no[pre].v-no[i].v);
        if(t<0)
            continue;
        if(t<mid)
            de++;
    }
    if(de<=k)
        return true;
    return false;
}
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%d%d",&no[i].p,&no[i].v);
    double l=0,r=1000000,mid;
    while(r-l>1e-7)
    {
        mid=(l+r)/2;
        if(check(mid))
            r=mid;
        else
            l=mid;
    }
    printf("%.4f\n",l);
    return 0;
}
