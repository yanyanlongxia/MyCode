//P1390 公约数的和
// Created by admin on 2020/7/12.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m[1000000],prime[1000000],pre[1000000],tot;
bool vis[1000000];
signed main()
{
    cin>>n;
    m[1]=1;
    for(int i=2;i<=n;i++)    //线性筛
    {
        if(!vis[i])
        {
            tot++;
            prime[tot]=i;
            m[i]=-1;
        }
        for(int j=1;j<=tot&&i*prime[j]<=n;j++)
        {
            vis[i*prime[j]]=true;
            if(i%prime[j]==0)
            {
                m[i*prime[j]]=0;
                break;
            }
            m[i*prime[j]]=-m[i];  //积性函数性质
        }
    }
    for(int i=1;i<=n;i++)
        pre[i]=pre[i-1]+m[i];
    int ans=0,r1,r2;
    for(int l1=1;l1<=n;l1=r1+1)  //对【n/k】进行整除分块
    {
        r1=n/(n/l1);
        int res=0,a=n/l1;
        for(int l2=1;l2<=a;l2=r2+1)//对剩下部分进行分块
        {
            r2=a/(a/l2);
            res+=1ll*(pre[r2]-pre[l2-1])*(a/l2)*(a/l2);  //公式计算
        }
        ans+=1ll*((l1+r1)*(r1-l1+1)/2)*res;  //等差数列求和
    }
    ans-=(n*(n+1))/2;
    ans/=2;
    printf("%d\n",ans);
    return 0;
}
