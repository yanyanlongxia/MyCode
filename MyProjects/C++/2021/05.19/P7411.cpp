//Created by yanyanlongxia on 2021/6/25
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e6,M=5e3;
const int dx[4]={1,0,0,-1},dy[4]={0,1,-1,0};
int n,head,tail,ans;
pair<int,int>q[N];
bool valid[M][M];
void checkadd(int x,int y) {
    if (!valid[x][y])
        return;
    int nu = 0;
    for (int i = 0; i < 4; i++)
        if (valid[x + dx[i]][y + dy[i]])
            nu++;
    if (nu == 3) {
        for (int i = 0; i < 4; i++) {
            pair<int,int>nxt=make_pair(x+dx[i],y+dy[i]);
            if (!valid[nxt.first][nxt.second])
                q[++tail]=nxt;
        }
    }
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P7411.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //ans=0;
        pair<int,int>now;
        scanf("%d%d",&now.first,&now.second);
        now.first+=1000,now.second+=1000;
        head=1,tail=0;
        q[++tail]=now;
        while(tail>=head){
            now=q[head];
            head++;
            if (valid[now.first][now.second])
                continue;
            valid[now.first][now.second]=1;
            ans++;
            checkadd(now.first,now.second);
            for(int j=0;j<4;j++)
                checkadd(now.first+dx[j],now.second+dy[j]);
        }
        printf("%d\n",ans-i);
    }
    return 0;
}
