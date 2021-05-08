//Created by yanyanlongxia on 2021/5/8
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const ll MOD=192107;
const int N=1e6;
int n,a[N],p;
int cho[N];
bool ex[N],al[201];
int ni[205][205],nu[205];
inline int hashr(){
    ll res=1;
    for(int i=1;i<=p;i++){
        res=res*cho[i];
        res=res%MOD;
    }
    for(int i=1;i<=p;i++)
        res=(res+cho[i])%MOD;
    return res;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("abc200D.out","w",stdout);
    srand(time(0));
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        a[i]%=200;
        if(nu[a[i]]){
            puts("Yes");
            printf("%d %d\n%d %d\n",1,ni[a[i]][1],1,i);
            return 0;
        }
        nu[a[i]]=1;
        ni[a[i]][1]=i;
    }
    for(int i=1;i<=500000;i++){
        p=rand()%(n-1)+2;
        clm(al);
        for(int j=1;j<=p;j++){
            cho[j]=rand()%n+1;
            while(al[cho[j]])
                cho[j]=rand()%n+1;
            al[cho[j]]=true;
        }
        sort(cho+1,cho+1+p);
        if(ex[hashr()])
            continue;
        ex[hashr()]=true;
        int pres=0;
        for(int j=1;j<=p;j++)
            pres+=a[cho[j]];
        pres%=200;
        if(nu[pres]){
            puts("YES");
            printf("%d ",nu[pres]);
            for(int j=1;j<=nu[pres];j++)
                printf("%d ",ni[pres][j]);
            puts("");
            printf("%d ",p);
            for(int j=1;j<=p;j++)
                printf("%d ",cho[j]);
            puts("");
            return 0;
        }
        else{
            nu[pres]=p;
            for(int j=1;j<=p;j++)
                ni[pres][j]=cho[j];
        }
    }
    puts("No");
    return 0;
}
