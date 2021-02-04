//File: P1040.cpp
//Author: yanyanlongxia
//Date: 2020/8/4
//
#include <bits/stdc++.h>

using namespace std;
int n,f[32],node[32][32],mem[32][32];
int dfs(int l,int r)
{
    if(l>r)
        return 1;
    if(l==r)
    {
        node[l][r]=l;
        return f[l];
    }
    if(mem[l][r])
        return mem[l][r];
    int ans=0,root;
    for(int i=l;i<=r;i++)
    {
        int now=dfs(l,i-1)*dfs(i+1,r)+f[i];
        if(now>ans)
        {
            ans=now;
            root=i;
        }
    }
    node[l][r]=root;
    return mem[l][r]=ans;
}
void qianxuprint(int l,int r)
{
    if(l>r)
        return ;
    printf("%d ",node[l][r]);
    qianxuprint(l,node[l][r]-1);
    qianxuprint(node[l][r]+1,r);
}
int main() {
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d",&f[i]);
    }
    printf("%d\n",dfs(1,n));
    qianxuprint(1,n);
    return 0;
}