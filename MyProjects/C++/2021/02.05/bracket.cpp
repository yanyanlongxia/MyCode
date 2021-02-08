//Created by yanyanlongxia on 2021/2/5
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int INF=0x3f3f3f3f;
int n,m,k,ans;
vector<int>v;
namespace sub1{
    const int N=30;
    int edge[N][N],maxm;
    int st[N],top;
    bool valid[N][N];
    bool check(){
        top=0;
        st[top]=0;
        if(v.size()==1)
            return false;
        for(int i=1;i<v.size();i++){
                if(edge[v[i-1]][v[i]]==INF)
                    return false;
                if(top && edge[v[i-1]][v[i]]==-st[top] && st[top]>0)
                    top--;
                else
                    st[++top]=edge[v[i-1]][v[i]];
        }
        if (top)
            return false;
        else {

            return true;
        }
    }
    void solve(){
        int x,y,z;
        maxm=1<<n;
        infm(edge);
        clm(valid);
        for(int i=1;i<=m;i++){
            scanf("%d%d%d",&x,&y,&z);
            edge[x][y]=z;
            edge[y][x]=-z;
        }
        for(int i=1;i<maxm;i++){
            v.clear();
            for(int j=0;j<n;j++){
                if(i & (1<<j))
                    v.push_back(j+1);
            }
            sort(v.begin(),v.end());
            do{
                if(check()&&!valid[v[0]][v[v.size()-1]]) {
                    valid[v[0]][v[v.size()-1]]=true;
                    valid[v[v.size()-1]][v[0]]=true;
                    ans++;
                }
            } while (next_permutation(v.begin(),v.end()));
        }
        printf("%d\n",ans);
    }
}
int main() {
    freopen("bracket.in","r",stdin);
    freopen("bracket.out","w",stdout);
    scanf("%d%d%d",&n,&m,&k);
    if(n<=8)
        sub1::solve();
    return 0;
}
