//
// Created by admin on 2020/7/19.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2000000000;
int n,l=0,r=maxn,mid;
signed main()
{
    cin>>n;
    while(l<r)
    {
        mid=(l+r)/2;
        if(mid*log10(mid)>=n-1)
            r=mid;
        else
            l=mid+1;
    }
    cout<<l<<endl;
    return 0;
}