#include<bits/stdc++.h>
using namespace std;
int a[100010];
map<int,int>mp;
int read()
{
    char c=getchar();
    int x=0,y=1;
    while(c<'0'||c>'9')
    {
        if(c=='-')
            y=-1;
        c=getchar();
    }
    while(c>='0'&&c<='9')
    {
        x=(x<<3)+(x<<1)+c-48;
        c=getchar();
    }
    return x*y;
}
int main()
{
    freopen("recite.in","r",stdin);
    freopen("recite.ans","w",stdout);
    int n,i,ans=2147483647;
    n=read();
    for(i=1;i<=n;i++)
    {
        a[i]=read();
        mp[a[i]-i]++;
    }
    for(i=1;i<=n;i++)
        ans=min(ans,n-mp[a[i]-i]);
    printf("%d\n",ans);
    return 0;
}