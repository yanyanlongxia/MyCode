//
// Created by admin on 2020/7/13.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n=0,m=0,l=0,r=0,mid=0;
pair<int,int>a[100000];
bool valid()
{
    int now=a[1].first,field=1;// 当前奶牛所在的位置和以即将放置的草地编号
    for (int i = 2; i <= n; ++i) {   //相当于是遍历每一头牛
        if (now+mid<=a[field].second)
            now+=mid;
        else
        {
            while (field<m&&now+mid>a[field].second)
                field++;
            if (now+mid>a[field].second)
                return 0;//说明已经不够放了,此mid值不可用
            if (now+mid<=a[field].first)
                now=a[field].first;  //两次放置中距离大于mid值，不影响结果（若再小就出草坪了，也不可）
            else
                now+=mid;  //不然就说明可以直接放
        }
    }
    return 1;
}
signed main()
{
    freopen("socdist.in","r",stdin);
    freopen("socdist.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        scanf("%d%d",&a[i].first,&a[i].second);
    sort(a+1,a+m+1);
    l=0;r=a[m].second;
    while (l<r)
    {
        mid=(l+r)/2+1;
        if(valid())
            l=mid;
        else
            r=mid-1;
    }
    cout<<l<<endl;
    return 0;
}
