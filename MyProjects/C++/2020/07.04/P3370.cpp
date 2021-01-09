//
// Created by admin on 2020/7/5.
//
#include <bits/stdc++.h>
using namespace std;
int n;
string a[1000];
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    cout<<unique(a+1,a+n+1)-a-1<<endl;
    return 0;
}
