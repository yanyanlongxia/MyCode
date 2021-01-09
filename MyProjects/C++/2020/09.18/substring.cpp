//File: substring.cpp
//Author: yanyanlongxia
//Date: 2020/9/19
//
#include <bits/stdc++.h>
using namespace std;
char st[1000005],s[1000005];
deque<int>q[200];
int ans,n,m;
inline int bsear(int i,int x)
{
    int l=0,r=q[i].size()-1,mid;
    while (l<r)
    {
        mid=l+r>>1;
        if (q[i][mid]>x)
            r=mid;
        else
            l=mid+1;
    }
    if (q[i][l]<=x)
        return -1;
    else
        return q[i][l];
}
int main() {
    freopen("substring.in","r",stdin);
    freopen("substring.out","w",stdout);
    scanf("%s%s",(st+1),(s+1));
    n=strlen(st+1);m=strlen(s+1);
    int from=0;
    for (int i=1;i<=n;i++)
        if (st[i]==s[1])
        {
            from=i;
            break;
        }
    for (int i=from;i<=n;i++)
        q[st[i]-'a'].push_back(i);
    for (int i=0;i<q[s[1]-'a'].size();i++)
    {
        int last=q[s[1]-'a'][i],res=0;
        bool flag=true;
        for (register int j=2;j<=m;j++)
        {
            last=bsear(s[j]-'a',last);
            if (last==-1)
            {
                flag=false;
                break;
            }
            if (j==m)
                res=last;
        }
        if (flag)
            ans=max(ans,(q[s[1]-'a'][i])*(n-res+1));
    }
    printf("%d\n",ans);
    return 0;
}
