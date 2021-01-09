//File: change.cpp
//Author: yanyanlongxia
//Date: 2020/9/14
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,dp[27][27],ans;
string s1,s2;
signed main() {
    //freopen("change.in","r",stdin);
    //freopen("change.out","w",stdout);
    memset(dp,0x3f3f3f3f,sizeof(dp));
    getline(cin,s1);
    getline(cin,s2);
    scanf("%lld",&n);
    char x[5],y[5];
    int z;
    if (s1.size()!=s2.size())
    {
        puts("-1");
        return 0;
    }
    for (int i=1;i<=n;i++)
    {
        scanf("%s%s%lld",x,y,&z);
        dp[x[0]-'a'][y[0]-'a']=min(dp[x[0]-'a'][y[0]-'a'],z);
        //dp[y[0]-'a'][x[0]-'a']=min(dp[y[0]-'a'][x[0]-'a'],z);
    }
    for (int k=0;k<26;k++)
        for (int i=0;i<26;i++)
            for (int j=0;j<26;j++)
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
    for (int i=0;i<s1.size();i++)
        if (s1[i]!=s2[i])
        {
            if (dp[s1[i]-'a'][s2[i]-'a']==0x3f3f3f3f && dp[s2[i]-'a'][s1[i]-'a']==0x3f3f3f3f)
            {
                puts("-1");
                return 0;
            }
            ans+=min(dp[s1[i]-'a'][s2[i]-'a'],dp[s2[i]-'a'][s1[i]-'a']);
        }
    printf("%lld\n",ans);
}
