//
// Created by admin on 2020/7/30.
//
#include <bits/stdc++.h>
using namespace std;
int n,a[100],sum;
bool dp[888][888];
double ans;
bool check(int x,int y)
{
    int z=sum-x-y;
    if(x+y>z&&y+z>x&&x+z>y)
        return 1;
    return 0;
}
double calc(double x,double y)
{
    double z=sum-x-y;
    double p=(x+y+z)/2;
    return sqrt(p*(p-x)*(p-y)*(p-z));
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    dp[0][0]=1;ans=-1;
    for(int k=1;k<=n;k++)
        for(int i=sum/2;i>=0;i--)
            for(int j=sum/2;j>=0;j--)
            {
                if(i>=a[k]&&dp[i-a[k]][j])
                    dp[i][j]=1;
                if(j>=a[k]&&dp[i][j-a[k]])
                    dp[i][j]=1;
            }
    for(int i=sum/2;i>0;i--)
        for(int j=sum/2;j>0;j--)
        {
            if(!dp[i][j])
                continue;
            if(check(i,j))
                ans=max(ans,calc(i,j));
        }
    if(ans!=-1)
        ans*=100;
    cout<< (int)ans<<endl;
    return 0;
}
