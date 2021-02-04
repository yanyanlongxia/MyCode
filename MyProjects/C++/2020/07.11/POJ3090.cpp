//
// Created by admin on 2020/7/11.
//
#include <iostream>
using namespace std;
int prime[1500],phi[1500],c,mn=1001,n,tot;
bool vis[1500];
int main()
{
    cin>>c;
    for(int i=2;i<=mn;i++)  //线性筛取欧拉函数
    {
        if(!vis[i])
        {
            phi[i]=i-1;
            tot++;
            prime[tot]=i;
        }
        for(int j=1;j<=tot&&i*prime[j]<=mn;j++)
        {
            vis[i*prime[j]]=1;
            if(i%prime[j]==0)
            {
                phi[i*prime[j]]=phi[i]*prime[j];
                break;
            }
            phi[i*prime[j]]=phi[i]*(prime[j]-1);  //积性函数
        }
    }
    for(int jj=1;jj<=c;jj++)
    {
        int ans=0;
        cin>>n;
        for(int i=2;i<=n;i++)
            ans+=phi[i];
        ans*=2;ans+=3;
        cout<<jj<<" "<<n<<" "<<ans<<endl;
    }
    return 0;
}
