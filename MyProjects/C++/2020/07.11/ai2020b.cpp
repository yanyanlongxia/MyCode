//
// Created by admin on 2020/7/11.
//
#include <bits/stdc++.h>
using namespace std;
int n,a[150],ans;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i+=2)
        if(a[i]%2==1)
            ans++;
    cout<<ans<<endl;
}
