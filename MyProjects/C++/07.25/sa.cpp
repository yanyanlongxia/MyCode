//Created by yanyanlongxia on 2021/7/27
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e6+5;
int rnk[N],sa[N],h[N];
struct P{
    int a,b,id;
}p[N];
void init_sa(char *s){
    int n= strlen(s);
    for(int i=0;i<n;i++)
        rnk[i]=s[i];
    for(int i=1;i<n;i<<=1){
        for(int j=0;j<n;j++)
            p[j]=P{rnk[j], j + i >= n ? 0 : rnk[j + i], j};
        //compare
        int c=0;
        for(int j=0;j<n;j++) {
            rnk[p[j].id] = c;
            c+=!(p[j].a==p[j+1].a&&p[j].b==p[j+1].b);
        }
    }
    for(int i=0;i<n;i++)
        sa[++rnk[i]]=i;
    sa[0]=n;
    /*
    int hh=0;
    for(int i=0;i<n;i++){
        if(hh>0) --hh;
        int j=sa[rnk[i]-1];
        while (j+hh<n&&i+hh<n&&s[j+hh]==s[i+hh]) ++hh;
        h[rnk[i]-1]=hh;
    }
     */
}
char s[N];
int main() {
    //freopen("sa.in","r",stdin);
    //freopen("sa.out","w",stdout);
    scanf("%s",s);
    init_sa(s);
    int n= strlen(s);
    for(int i=0;i<n;i++)
        printf("%d ",sa[i]);
    return 0;
}
