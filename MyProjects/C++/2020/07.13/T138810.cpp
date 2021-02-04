//
// Created by admin on 2020/7/18.
//
#include <bits/stdc++.h>
using namespace std;
int a[1000000],l,r,x,y,ans,n,q;
int main()
{
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    int op;
    for(int i=1;i<=q;i++)
    {
        scanf("%d",&op);
        if(op==1)
        {
            scanf("%d%d",&l,&x);
            a[l]=x;
        }
        else
        {
            scanf("%d%d%d%d",&l,&r,&x,&y);
            ans=0;
            for(;l<=r;l++)
                if(a[l]%x==y%x)
                    ans++;
            printf("%d\n",ans);
        }
    }
}