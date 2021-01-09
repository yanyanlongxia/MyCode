//
// Created by admin on 2020/8/1.
//
#include<bits/stdc++.h>
using namespace std;
inline double square(double x)
{
    return x*x;
}
double sx,sy,tx,ty,ans=1e9;
int main()
{
    cin>>sx>>sy>>tx>>ty;
    ans=min(ans,sqrt(square(sx+tx+2)+square(sy-ty)));
    ans=min(ans,sqrt(square(-sx-tx+2)+square(sy-ty)));
    ans=min(ans,sqrt(square(sx-tx)+square(sy+ty+2)));
    ans=min(ans,sqrt(square(sx-tx)+square(-sy-ty+2)));
    ans=min(ans,sqrt(square(-sx-ty+2)+square(-sy-tx+1)));
    ans=min(ans,sqrt(square(-sx-ty+1)+square(-sy-tx+2)));
    ans=min(ans,sqrt(square(sx-ty+2)+square(-sy+tx+1)));
    ans=min(ans,sqrt(square(sx-ty+1)+square(-sy+tx+2)));
    ans=min(ans,sqrt(square(-sx+ty+2)+square(-sy+tx+1)));
    ans=min(ans,sqrt(square(-sx+ty+1)+square(-sy+tx+2)));
    ans=min(ans,sqrt(square(sx+ty+2)+square(sy+tx+1)));
    ans=min(ans,sqrt(square(sx+ty+1)+square(sy+tx+2)));
    printf("%.3lf\n",ans);
    return 0;
}
