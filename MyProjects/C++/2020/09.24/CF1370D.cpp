//File: CF1370D.cpp
//Author: yanyanlongxia
//Date: 2020/9/28
//
#include <bits/stdc++.h>

using namespace std;
int n,k,a[1000005],tmp[1000005],cnt,pmt[1000005];
bool check(int x)
{
    int res=0;
    for (int i=1;i<=n;i++)
    {
        if (res&1)
        {
            if (a[i]<=x)
                res++;
        } else
            res++;
    }
    if(res>=k)
        return true;
    res=0;
    for (int i=1;i<=n;i++)
    {
        if (res&1)
            res++;
        else if (a[i]<=x)
            res++;
    }
    if (res>=k)
        return true;
    return false;
}
int main() {
    scanf("%d%d",&n,&k);
    for (int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for (int i=1;i<=n;i++)
        tmp[i]=a[i];
    sort(tmp+1,tmp+1+n);
    for (int i=1;i<=n;i++)
        if (tmp[i]!=tmp[i-1])
            pmt[++cnt]=tmp[i];
    int l=1,r=cnt,mid;
    while (l<r)
    {
        mid=l+r>>1;
        if (check(pmt[mid]))
            r=mid;
        else
            l=mid+1;
    }
    printf("%d\n",pmt[l]);
    return 0;
}
