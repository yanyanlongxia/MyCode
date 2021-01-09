//
// Created by admin on 2020/6/26.
//
#include<bits/stdc++.h>
#define int long long
using namespace std;
int s[300010];
pair<int,int>a[300010];
signed main()
{
    int n,k,i,ans=0,minn,p=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    cin>>k;
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
        s[i]=s[i-1]+a[i].first;
    for(i=1;i<=k;i++)
        ans+=a[i].first*(i-1)-(s[i-1]-s[0]);
    minn=ans;
    for(i=2;i<n-k+2;i++)
    {
        ans+=(k-1)*(a[i+k-1].first+a[i-1].first)-(s[i+k-2]-s[i-1])*2;
        if(ans<minn)
        {
            minn=ans;
            p=i;
        }
    }
    for(i=p;i<p+k;i++)
        cout<<a[i].second<<' ';
    return 0;
}
