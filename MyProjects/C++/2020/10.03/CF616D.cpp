//File: CF616D.cpp
//Author: yanyanlongxia
//Date: 2020/10/5
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k,a[1000005],maxl,maxr,buc[1000005];
int main() {
    scanf("%d%d",&n,&k);
    for (int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    buc[a[1]]=1;
    for (int l=1,r=1,cnt=1;r<=n&&l<=n;l++)
    {
        while (cnt<=k && r<=n)
        {
            r++;
            if (!buc[a[r]])
                cnt++;
            buc[a[r]]++;
        }
        if (r-l>maxr-maxl)
        {
            maxl=l;
            maxr=r;
        }
        buc[a[l]]--;
        if (!buc[a[l]])
            cnt--;
    }
    printf("%d %d\n",maxl,maxr-1);
    return 0;
}
