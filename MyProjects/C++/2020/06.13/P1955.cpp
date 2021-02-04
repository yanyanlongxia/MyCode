#pragma GCC optimize(3)
#include <bits/stdc++.h>
using namespace std;
int t,n,m,fa[10000000];
vector<int> dis1,dis2;
int find(int x)
{
    if(x==fa[x])
        return x;
    else
        fa[x]=find(fa[x]);//路径压缩
    return fa[x];
}
void merge(int y,int x)
{
    fa[find(x)]=find(y);
}
void put()
{
    for(int i=0;i<dis1.size();i++)
        if(find(dis1[i])==find(dis2[i]))
        {
            cout<<"NO"<<endl;
            return;
        }
    cout<<"YES"<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    int v,w,e;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>v>>w>>e;
            v%=1000007;
            w%=1000007;
            if(e==1)
            {
                if(fa[v]==0)
                    fa[v]=v;
                if(fa[w]==0)
                    fa[w]=w;
                merge(v,w);
            }
            else
            {
                dis1.push_back(v);
                dis2.push_back(w);
            }
        }
        put();
        for(int j=1;j<=n;j++)
            fa[j]=0;
        dis1.clear();
        dis2.clear();
    }
    return 0;
}

