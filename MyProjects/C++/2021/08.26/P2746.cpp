//File: P2746.cpp
//Author: yanyanlongxia
//Date: 2020/8/8
//
#include <bits/stdc++.h>

using namespace std;
const int N=10000;
int n,head[10000],nxt[10000],ver[10000],bel[10000],sccn,tot,din[10000],dout[10000];
int _tot,_head[10000],_nxt[10000],_ver[10000];
vector<int>scc[N];
vector<int>ord;
void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void _add(int x,int y)
{
    _ver[++_tot]=y;
    _nxt[_tot]=_head[x];
    _head[x]=_tot;
}
bool vis[N];
void dfs1(int x){
	vis[x]=true;
	for(int i=head[x];i;i=nxt[i]){
		int y=ver[i];
		if(!vis[y])
			dfs1(y);
	}
	ord.push_back(x);
}
void dfs2(int x,int k){
	vis[x]=true;
	bel[x]=k;
	scc[k].push_back(x);
	for(int i=_head[x];i;i=_nxt[i]){
		int y=_ver[i];
		if(!vis[y])
			dfs2(y,k);
	}
}
void kor(){
	for(int i=1;i<=n;i++)
		if(!vis[i])
			dfs1(i);
	memset(vis,0,sizeof(vis));
	for(int i=ord.size()-1;i>=0;i--)
		if(!vis[ord[i]])
			dfs2(ord[i],++sccn);
}
int main() {
    int x,ans1=0,ans2=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        while (x!=0)
        {
            add(i,x);
            _add(x,i);
            scanf("%d",&x);
        }
    }
    kor();
    for(int i=1;i<=n;i++)
        for(int j=head[i];j;j=nxt[j])
        {
            if(bel[i]!=bel[ver[j]])
            {
                din[bel[ver[j]]]++;
                dout[bel[i]]++;
            }
        }
    for(int i=1;i<=sccn;i++)
    {
        if(din[i]==0)
            ans1++;
        if(dout[i]==0)
            ans2++;
    }
    //printf("%d\n",sccn);
    if(sccn==1)
        printf("%d\n%d\n",1,0);
    else
        printf("%d\n%d\n",ans1,max(ans1,ans2));
    return 0;
}
