#include<bits/stdc++.h>
using namespace std;
int n,x[210005],y[210005],s[210005];
double r=1.1e7,l=0,eps=1e-6;
bool check(long double mid)
{
    long double t=0;
    for(int i=1;i<=n;++i)
    {
        t+=s[i]/mid;
        if(t>y[i])
            return false;
        if(t<x[i])
            t=x[i];
    }
    return true;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>x[i]>>y[i]>>s[i];
    while(r-l>eps)
    {
        long double mid=(l+r)/2;
        if(check(mid))
            r=mid;
        else
            l=mid;
    }
    printf("%.2lf\n",r);
    return 0;
}