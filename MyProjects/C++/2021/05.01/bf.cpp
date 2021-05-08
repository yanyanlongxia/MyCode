//Created by yanyanlongxia on 2021/5/7
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=300;
int ma[N],tot,p[N],s1,s2,s3;
char a[N],b[N],c[N];
bool solved;
void solve(){
    int x=0,y=0,z=0;
    if((!p[ma[a[1]]])||(!p[ma[b[1]]])||(!p[ma[c[1]]]))
        return;
    for(int i=1;i<=s1;i++){
        x=10*x+p[ma[a[i]]];
    }
    for(int i=1;i<=s2;i++){
        y=10*y+p[ma[b[i]]];
    }
    for(int i=1;i<=s3;i++){
        z=10*z+p[ma[c[i]]];
    }
    if(x+y!=z)
        return;
    solved=true;
    printf("%d\n%d\n%d\n",x,y,z);
}
bool used[N];
void dfs(int step){
    if(step==tot+1){
        solve();
        return;
    }
    if(solved)
        return;
    for(int i=0;i<=9;i++) {
        if (!used[i]) {
            used[i] = true;
            p[step] = i;
            dfs(step + 1);
            if (solved)
                return;
            used[i] = false;
        }
    }
}
int main() {
    //freopen("data.in","r",stdin);
    //freopen("abc198D.out","w",stdout);
    scanf("%s",(a+1));s1=strlen(a+1);
    scanf("%s",(b+1));s2=strlen(b+1);
    scanf("%s",(c+1));s3=strlen(c+1);
    for(int i=1;i<=s1;i++)
        if(!ma[a[i]])
            ma[a[i]]=++tot;
    for(int i=1;i<=s2;i++)
        if(!ma[b[i]])
            ma[b[i]]=++tot;
    for(int i=1;i<=s3;i++)
        if(!ma[c[i]])
            ma[c[i]]=++tot;
    if(tot>=11){
        puts("UNSOLVABLE");
        return 0;
    }
    dfs(1);
    if(!solved)
        puts("UNSOLVABLE");
    return 0;
}
