//
// Created by admin on 2020/7/17.
//
#include <bits/stdc++.h>
using namespace std;
int t,n,a[100];
bool vis[100];
vector<int>res;
int main()
{
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        n*=2;
        for(int j=1;j<=n;j++)
            cin>>a[j];
        for(int j=1;j<=n;j++)
            if(!vis[j])
            {
                res.push_back(a[j]);
                for(int k=j+1;k<=n;k++)
                    if(a[k]==a[j])
                    {
                        vis[k]=true;
                        break;
                    }
            }
        for(int j=0;j<res.size()-1;j++)
            cout<<res[j]<<" ";
        cout<<res[res.size()-1]<<endl;
        res.clear();
        memset(vis,false,sizeof(vis));
        memset(a,0,sizeof(vis));
    }
    return 0;
}