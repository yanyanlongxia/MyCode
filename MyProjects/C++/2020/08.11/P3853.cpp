//File: P3853.cpp
//Author: yanyanlongxia
//Date: 2020/8/12
//[TJOI2007]路标设置
#include <bits/stdc++.h>

using namespace std;
int tl,n,k,pos[100005],len[100005],maxl;
bool check(int x)
{
    int cnt = 0;
    for(int i=1;i<=n;i++)
        cnt+=(len[i]-1)/x;
    return cnt<=k;
}
int main() {
    int l,r,mid;
    scanf("%d%d%d",&tl,&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%d",&pos[i]);
    n--;
    for(int i=1;i<=n;i++)
    {
        len[i]=pos[i+1]-pos[i];
        maxl=max(len[i],maxl);
    }
    l=1;
    r=maxl;
    while (l<=r)
    {
        mid=l+r>>1;
        if(check(mid))
            r=mid-1;
        else
            l=mid+1;
    }
    printf("%d\n",l);
    return 0;
}