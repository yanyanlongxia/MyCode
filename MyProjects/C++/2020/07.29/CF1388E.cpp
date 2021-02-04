//
// Created by admin on 2020/7/31.
//
#include <bits/stdc++.h>
#define eps 1e-8
using namespace std;
int n;
double ans=1e9;
struct segment
{
    double x1,x2,y;
}s[10000];
bool cmp(segment a,segment b)
{
    if(a.x1!=b.x1)
        return a.x1<b.x1;
    else
        return a.x2<b.x2;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        scanf("%d%d%d",&s[i].x1,&s[i].x2,&s[i].y);
    sort(s+1,s+n+1,cmp);
    for(int i=2;i<=n;i++)
    {
        double minn,maxn;
        double k=(s[i].y-s[i-1].y)/(s[i].x1-s[i-1].x2);
        double last=s[i].x2-s[i].y/k;
        bool flag=0;
        for(int j=2;j<=n;j++)
        {
            if(j==i)
                continue;
            double l=s[i].x1-s[i].y/k,r=s[i].x2-s[i].y/k;
            if(last-l>eps)
            {
                flag=1;
                break;
            }
            last=r;
        }
        if(flag==1)
            continue;
        minn=s[1].x1-s[1].y/k;maxn=s[n].x2-s[n].y/k;
        ans=min(ans,maxn-minn);
    }
    printf("%.7f\n",ans);
    return 0;
}