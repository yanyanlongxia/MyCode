//File: b.cpp
//Author: yanyanlongxia
//Date: 2020/12/13
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e5;
int n,k,tot,prime[N];
bool valid[N],vis[N];
inline void pre(){
    for(int i=2;i<=n;i++){
        if(!vis[i]){
            prime[++tot]=i;
            if(tot!=1)
                valid[prime[tot]+prime[tot-1]]=true;
            for(int j=2;j*i<=n;j++)
                vis[i*j]=true;
        }
    }
}
int main() {
    //freopen("data.in","r",stdin);
    //freopen("b.out","w",stdout);
    cin>>n>>k;
    int cnt=0;
    vis[0]=vis[1]=true;
    pre();
    for(int i=2;i<=n;i++)
        if(!vis[i]&&valid[i-1])
            cnt++;
    if(cnt==k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
