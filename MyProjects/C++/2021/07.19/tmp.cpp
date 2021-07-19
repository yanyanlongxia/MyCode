//Created by yanyanlongxia on 2021/7/19
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=5e3+5;
int n,m;
char p[N][N];
queue<pair<int,int> >q;
vector<pair<int,int> >tp;
int main() {
    freopen("data.in","r",stdin);
    //freopen("tmp.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%s",(p[i]+1));
    q.push(make_pair(1,1));
    for(int i=1;i<=n+m-1;i++){
        printf("%c",p[q.front().first][q.front().second]);
        int minc=int ('z')+1;
        tp.clear();
        while(!q.empty()){
            int dx=1,dy=0;
            pair<int,int> now=q.front();
            q.pop();
            tp.push_back(now);
            for(int j=1;j<=2;j++){
                swap(dx,dy);
                if(now.first+dx>n||now.second+dy>m)
                    continue;
                minc=min(minc,int(p[now.first+dx][now.second+dy]));
            }
        }
        //printf("%c",char(minc));
        for(int j=0;j<tp.size();j++){
            int dx=1,dy=0;
            pair<int,int>now=tp[j];
            for(int k=1;k<=2;k++){
                swap(dx,dy);
                if(now.first+dx>n||now.second+dy>m)
                    continue;
                if(int(p[now.first+dx][now.second+dy])==minc)
                    q.push(make_pair(now.first+dx,now.second+dy));
            }
        }
    }
    puts("");
    return 0;
}
