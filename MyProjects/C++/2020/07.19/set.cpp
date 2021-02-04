//
// Created by admin on 2020/7/20.
//
#include <bits/stdc++.h>
#define int long long
#define MN 200500
using namespace std;
int fa[MN],n,m,a[MN],s[MN],sz[MN],tag[MN];
vector<int>ele[MN];
inline int read()
{
    int x=0,ff=1;char ch=getchar();
    while (!isdigit(ch))
    {
        if (ch=='-')
            ff=-1;
        ch=getchar();
    }
    while (isdigit(ch))
    {
        x=x*10+ch-48;
        ch=getchar();
    }
    return x*ff;
}
inline void print(int x)
{
    if(x<0)
    {
        putchar('-');
        x=-x;
    }
    if(x>9)
        print(x/10);
    putchar(x%10+'0');
}
inline int find(int x)
{
    if(x==fa[x])
        return x;
    return fa[x]=find(fa[x]);
}
inline void merge(int x,int y)
{
    if(sz[find(x)]<sz[find(y)])  //启发式合并
        swap(x,y);
    sz[find(x)]+=sz[find(y)];
    sz[find(y)]=0;
    for(int i=0;i<ele[find(y)].size();i++)
        ele[find(x)].push_back(ele[find(y)][i]);
    fa[find(y)]=fa[find(x)];
}
inline void add(int x,int del)
{
    for(int i=x;i<=n;i+= i & -i)
        s[i]+=del;
}
inline int ask(int x)
{
    int ans=0;
    for(int i=x;i;i-= i & -i)
        ans+=s[i];
    return ans;
}
signed main()
{
    int op,x,y;
    n=read();m=read();
    for(int i=1;i<=n;i++)
    {
        fa[i]=i;
        sz[i]=1;
        ele[i].push_back(i);
    }
    while(m--)
    {
        op=read();x=read();y=read();
        switch (op)
        {
            case 1:
            {
                merge(x,y);
                break;
            }
            case 2:
            {
                for(int i=0;i<ele[find(x)].size();i++)
                {
                    tag[ele[find(x)][i]]+=y;
                    a[ele[find(x)][i]]+=y;
                }
                break;
            }
            case 3:
            {
                for(int i=x;i<=y;i++)
                {
                    tag[i]-=a[i];
                    a[i]=0;
                }
                break;
            }
            case 4:
            {
                for (int i = x; i <= y; ++i) {
                    if(tag[i])
                    {
                        add(i,tag[i]);
                        tag[i]=0;
                    }
                }
                print(ask(y)-ask(x-1));
                puts("");
                break;
            }
        }
    }
    return 0;
}