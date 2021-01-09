//
// Created by admin on 2020/7/11.
//
#include <bits/stdc++.h>
using namespace std;
int l,r,d,ans,a1,a2,i;
int main()
{
    cin>>l>>r>>d;
    for(i=1;i<=1000;i++)
        if(i*d>=l)
            break;
    a1=i;
    for(;i<=1000;i++)
        if(i*d>=r)
            break;
    a2=i-1;
    if(i*d==r)
        a2++;
    ans=a2-a1+1;
    cout<<ans<<endl;
    return 0;
}
