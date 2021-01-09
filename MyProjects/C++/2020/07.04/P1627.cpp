//
// Created by admin on 2020/7/4.
//
#include <bits/stdc++.h>
using namespace std;
int a[1100000],n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    if(n%2==0)
        cout<<(a[n/2+1]+a[n/2])/2<<endl;
    else
        cout<<a[n/2+1]<<endl;
    return 0;
}
