//注：这道题还没调出来(我没发现哪里错了)
// Created by admin on 2020/8/3.
//时间复杂度为O(nlog(n)),时间复杂度瓶颈在排序上，求回文子串个数为O(n)的Manacher算法
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[100000],an[100000],ans,p[100000];
signed main()
{
    scanf("%lld%lld",&m,&n);
    for(int i=1;i<=m;i++)
        scanf("%lld",&a[i]);
    sort(a+1,a+m+1);
    for(int i=1;i<m;i++)
        a[i]=a[i+1]-a[i];//构造差分数组
    an[0]=-0x3f3f3f3f;
    an[1]=0;
    int j=2,id=0,mx=0;
    for(int i=1;i<m;i++)
    {
        an[j++]=a[i];
        an[j++]=0;
    }
    an[j]=0x3f3f3f3f;
    for(int i=1;i<=j;i++)//Manacher
    {
        if(i<mx)
            p[i]=min(p[2*id-i],mx-i);
        else
            p[i]=1;
        while(an[i+p[i]]==an[i-p[i]])
            p[i]++;
        if(mx<i+p[i])
        {
            mx=i+p[i];
            id=i;
        }
        ans+=p[i]/2;
    }
    printf("%lld\n",ans);
    return 0;
}