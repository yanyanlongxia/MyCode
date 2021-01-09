//File: c.cpp
//Author: yanyanlongxia
//Date: 2020/12/13
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=20;
bool row[N],col[N];
char st[N][N];
int lsq;
bool prow(int x){
    for(int i=1;i<=8;i++)
        if(st[i][x]=='W')
            return false;
    return true;
}
bool pcol(int x){
    for(int i=1;i<=8;i++)
        if(st[x][i]=='W')
            return false;
    return true;
}
bool all=true;
int main() {
    //freopen("data.in","r",stdin);
    //freopen("c.out","w",stdout);
    for(int i=1;i<=8;i++)
        scanf("%s",(st[i]+1));
    for(int i=1;i<=8;i++)
        row[i]=prow(i);
    for(int i=1;i<=8;i++)
        col[i]=pcol(i);
    for(int i=1;i<=8;i++)
        all&=row[i];
    if(all)
        lsq=8;
    else{
        for(int i=1;i<=8;i++){
            lsq+=row[i];
            lsq+=col[i];
        }
    }
    printf("%d\n",lsq);
    return 0;
}
