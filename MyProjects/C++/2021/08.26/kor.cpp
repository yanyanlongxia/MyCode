#include<bits/stdc++.h>
using namespace std;
const int N=5e5;
int n,cnt,head[N],nxt[N],ver[N],sccn,bel[N],ans=0x3f3f3f3f;
int _cnt,_head[N],_nxt[N],_ver[N];
vector<int>scc[N];
vector<int>ord;
inline void add(int x,int y){
	ver[++cnt]=y;
	nxt[cnt]=head[x];
	head[x]=cnt;
}
inline void _add(int x,int y){
    _ver[++_cnt]=y;
    _nxt[cnt]=_head[x];
    _head[x]=_cnt;
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
int main(){
	//freopen("test.in","r",stdin);
	//freopen("test.out","w",stdout);
	int t;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&t);
		add(i,t);
        _add(t,i);
	}
	kor();
	for(int i=1;i<=sccn;i++){
		if(scc[i].size()>=2)
			ans=min(ans,int(scc[i].size()));
	}
	printf("%d\n",ans);
	return 0;
}
