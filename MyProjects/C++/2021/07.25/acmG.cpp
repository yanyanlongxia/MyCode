//Created by yanyanlongxia on 2021/7/30
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e6;
int n,oud[N];
queue<int>q;
set<int>ous[N],ins[N];
int main() {
    //freopen("data.in","r",stdin);
    //freopen("acmG.out","w",stdout);
    int x,y;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        scanf("%d%d",&x,&y);
        ous[x].insert(y);ins[x].insert(y);
        ous[y].insert(x);ins[y].insert(x);
        oud[x]++;oud[y]++;
    }
    for(int i=1;i<=n;i++){
        if(oud[i]==1||oud[i]==0){
            q.push(i);
        }
    }
    while (!q.empty()){
         int now=q.front();
         q.pop();
         vector<int>wc;
         wc.clear();
         for(auto it=ins[now].begin();it!=ins[now].end();it++){
             int nxt=*it;
             if(!ous[now].empty()){
                 auto it2=ous[now].begin();
                 if(nxt!=*it2)
                     continue;
             }
             wc.push_back(nxt);
             oud[nxt]--;
             ous[nxt].erase(ous[nxt].find(now));
             if(oud[nxt]==1||oud[nxt]==0)
                 q.push(nxt);
             printf("%d %d\n",nxt,now);
         }
         for(auto i:wc)
             ins[now].erase(i);
    }
    return 0;
}
