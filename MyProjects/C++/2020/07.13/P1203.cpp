//
// Created by admin on 2020/7/16.
//
#include<bits/stdc++.h>
using namespace std;
int n,k;
char o[1005],vis[305];
int main() {
    cin>>n>>o;
    for(int i=0;i<n;i++)
    {
        int t=0,p=0,f=i,e=i+1;
        char d1,d2;
        for(int j=0;j<=n;j++) vis[j]=0;
        while(o[f]=='w')
        {
            f--;
            if(f==0) f=n;
            if(f==i+1){
                break;
            }
        }
        d1=o[f];
        for(int j=i;o[j]==d1 || o[j]=='w';j--)
        {
            if(j==0)
                j=n;
            t++;
            vis[j]=1;
            if(j==i+1)
                break;
        }
        if(i==n-1) d2=o[0];
        else
        {
            while(o[e]=='w')
            {
                if(e==n-1)
                    e=-1;
                e++;
                if(e==i)
                    break;
            }
            d2=o[e];
        }
        for(int j=i%(n-1)+1;o[j]==d2 || o[j]=='w';j++)
        {
            if(vis[j]==1)
                break;
            if(j==n-1)
                j=-1;
            t++;
            if(j==i)
                break;
        }
        k=max(k,t);
    }
    cout<<k<<endl;
    return 0;
}
