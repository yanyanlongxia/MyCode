//
// Created by admin on 2020/7/30.
//
#include <bits/stdc++.h>
using namespace std;
int n,dp[2000000],ans,ind;
string s;
int main()
{
    cin>>s;
    int n=s.size();
    for(int i=1;i<n;i++)
    {
        if((s[i]==')'&&s[i-dp[i-1]-1]=='(') || (s[i]==']'&&s[i-dp[i-1]-1]=='['))
        {
            dp[i]=dp[i-1]+2+dp[i-dp[i-1]-2];
            if(dp[i]>ans)
            {
                ans=dp[i];
                ind=i;
            }
        }
    }
    for(int i=ind-ans+1;i<=ind;i++)
        printf("%c",s[i]);
    return 0;
}