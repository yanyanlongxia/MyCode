//
// Created by admin on 2020/6/7.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;

int t,n;

inline int count(int a,int f,int len)
{
    int lastt=((n-f)/len)*len+f;
    int timt=((lastt-f)/len)+1;

    return timt;
}

signed main()
{
    cin>>t;
    while (t--)
    {
        cin>>n;

        int ans=0ll,pos=1ll,now=0ll,cnt;
        while (1)
        {
            now++;
            pos*=2ll;
            cnt=count(now,pos/2ll,pos);
            if (cnt<=0)  break;
            else ans+=cnt*now;
        }
        cout<<ans<<endl;
    }
    return 0;
}
