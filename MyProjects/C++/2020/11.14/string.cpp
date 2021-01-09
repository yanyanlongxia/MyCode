//File: string.cpp
//Author: yanyanlongxia
//Date: 2020/11/28
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e6;
int n,m,a,b,p,ans;
bool lsq[N],no[N];
char shh[N];
bool check(int i){
    for(int j=1;j<=m;j++)
        if(no[j] != lsq[j + i - 1])
            return false;
    return true;
}
void printarr(){
    /*
    printf("lsq:  ");
    for(int i=1;i<=n;i++)
        printf("%d",lsq[i]);
        */
    //puts("");
    printf("no:  ");
    for(int i=1;i<=m;i++)
        printf("%d",no[i]);
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("string.out","w",stdout);
    scanf("%d%d%d%d%d",&n,&a,&b,&p,&m);
    char ch=getchar();
    while (!isdigit(ch))
        ch=getchar();
    no[1]=ch-'0';
    for(int i=2;i<=m;i++){
        ch=getchar();
        no[i]=ch-'0';
    }
    for(int i=1;i<=n;i++)
        lsq[i]=((a * i + b) % n >= p);
    for(int i=1;i<=n-m+1;i++)
        if(check(i))
            ans++;
    printf("%d\n",ans);
    return 0;
}
