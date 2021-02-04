//File: JS980.cpp
//Author: yanyanlongxia
//Date: 2020/8/21
//
#include <bits/stdc++.h>
#define int long long
#define eps 1e-3
using namespace std;
int n,k,xp[5005],yp[5005],num,opt,a,b,x,y;
inline double dabs(double xk)
{
    if(xk<=-eps)
        return -xk;
    else
        return xk;
}
inline double square(double xk)
{
    return xk*xk;
}
inline bool check(int i)
{
    double dist,xmid,ymid;
    if (opt==1)
    {
        if (b*yp[i]>=x-a*xp[i] && b*yp[i]<=y-a*xp[i])
            return true;
    }
    if (opt==2)
    {
        dist=(double)sqrt(square(a-x)+square(b-y))/2.0000000;
        xmid=(double)(a+x)/2,ymid=(double)(b+y)/2;
        if (sqrt(square(xp[i]-xmid)+square(yp[i]-ymid))-dist<=eps)
            return true;
    }
    if(opt==3)
    {
        if(a*xp[i]*xp[i]+b*xp[i]+x==yp[i])
            return true;
    }
    return false;
}
signed main() {
    scanf("%lld%lld",&n,&k);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld%lld",&xp[i],&yp[i]);
    }
    while (k--)
    {
        num=0;
        scanf("%lld",&opt);
        switch (opt) {
            case 1:
            {
                scanf("%lld%lld%lld%lld",&a,&b,&x,&y);
                if(x>y)
                    swap(x,y);
                break;
            }
            case 2:
            {
                scanf("%lld%lld%lld%lld",&a,&b,&x,&y);
                break;
            }
            case 3:
            {
                scanf("%lld%lld%lld",&a,&b,&x);
                break;
            }
        }
        for (int i = 1; i <= n; ++i) {
            if (check(i))
                num++;
        }
        printf("%lld %lld\n",n-num,num);
    }
    return 0;
}