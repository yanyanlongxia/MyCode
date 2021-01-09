//
// Created by admin on 2020/7/17.
//
#include <bits/stdc++.h>
using namespace std;
int m,s,t,dp[500000];//dp[i]表示第i秒守望者已经逃的距离
int main()
{
    cin>>m>>s>>t;
    for(int i=1;i<=t;i++)  //先全部选择闪烁
    {
        if(m>=10)//魔法值够闪
        {
            m-=10;
            dp[i]=dp[i-1]+60;
        } else{ //魔法值不够，休息
            dp[i]=dp[i-1];
            m+=4;
        }
    }
    for(int i=1;i<=t;i++)  //处理行走
    {
        dp[i]=max(dp[i],dp[i-1]+17);
        if(dp[i]>=s)  //已经到达，输出时间
        {
            cout<<"Yes"<<endl<<i<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl<<dp[t]<<endl;
    return 0;
}
