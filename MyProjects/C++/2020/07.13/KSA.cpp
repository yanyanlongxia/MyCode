//
// Created by admin on 2020/7/13.
//
#include<bits/stdc++.h>
using namespace std;
int t,n,v[100500],ans;
int main()
{
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int mn=-1;
        ans=0;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>v[i];
        for(int i=1;i<n;i++)
            if(v[i]>mn)
            {
                mn=v[i];
                if(v[i]>v[i+1])
                    ans++;
            }
        if(v[n]>mn)
            ans++;
        printf("Case #%d: %d\n",k,ans);
    }
    return 0;
}
