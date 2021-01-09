#include <bits/stdc++.h>
using namespace std;
int n,m,c[100005],a[100005];
char s[5];
int ask(int x)
{
    int ans=0;
    for(;x;x-=x & -x)
        ans+=c[x];
    return ans;
}
void add(int x,int d)
{
    for(;x<=n;x+=x & -x)
        c[x]+=d;
}
int main()
{
    int x,y;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        add(i,x);
        a[i]=x;
    }
    for(int i=1;i<=m;i++)
    {
        scanf("%s%d%d",&s,&x,&y);
        if(s[0]=='C')
        {
            add(x,y-a[x]);
            a[x]=y;
        }
        else
            printf("%d\n",ask(y)-ask(x-1));
    }
    return 0;
}