//
// Created by admin on 2020/7/30.
//
#include <bits/stdc++.h>
using namespace std;
int n,dp[31],ans=0,a,m;
int read()
{
    int x=0,f=1;char ch=getchar();
    while(!isdigit(ch)){if(ch=='-') f=-1;ch=getchar();}
    while(isdigit(ch)){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
int main()
{
    n=read();
    for(int i=1;i<=n;i++){
        a=read();m=0;
        for(int j=0;j<31;j++)
            if((a>>j)&1)
                m=max(dp[j]+1,m);
        for(int j=0;j<31;j++)
            if((a>>j)&1)
                dp[j]=max(dp[j],m);
    }
    for(int j=0;j<31;j++)
        ans=max(ans,dp[j]);
    printf("%d\n",ans);
    return 0;
}