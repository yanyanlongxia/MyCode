//
// Created by admin on 2020/7/11.
//
#include <bits/stdc++.h>
using namespace std;
int np[100000],n,f[100000];
bool p[100000];
/*bool valid(int i,int j,int k)
{
    if((i+k-j)%2!=0)
        return false;
    if((i+j-k)%2!=0)
        return false;
    return (j + k - i) % 2 == 0;
}*/
int main()
{
    cin>>n;
    int man=sqrt(2*n);
    for(int i=2;i<=man;i++)
    {
        np[i]=i*i;
        p[i*i]=true;
    }
    f[1]=f[2]=f[3]=f[4]=f[5]=0;
    for(int mn=6;mn<=n;mn++)
    {
        man=sqrt(2*mn);
        for(int i=2;i<man;i++)
            for(int j=2;j<man&&np[j]<2*mn-np[i];j++)
                if(p[2*mn-np[i]-np[j]])
                        f[mn]+=1;
    }
    for(int i=1;i<=n;i++)
        cout<<f[i]<<" ";
    cout<<endl;
    return 0;
}
