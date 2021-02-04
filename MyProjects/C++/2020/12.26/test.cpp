//File: test.cpp
//Author: yanyanlongxia
//Date: 2021/1/1
//
#include <bits/stdc++.h>

#define ll long long
#define exp 1e-3
using namespace std;
int num[30],base[30],ct[30];
double cont[3],arra[3];
inline int get_bit(int state,int w){
    int res=state/base[w-1]%3;
    return res;
}
inline bool simil(double a,double b){
    if(a-b>exp || b-a>exp)
        return false;
    return true;
}
inline void valid(int state){
    memset(ct,0,sizeof(ct));
    memset(cont,0.0,sizeof(cont));
    memset(arra,0.0,sizeof(arra));
    for(int i=1;i<=17;i++){
        int tmp=get_bit(state,i);
        cont[tmp]+=num[i];
        ct[tmp]++;
    }
    cont[1]+=12;
    arra[0]=cont[0];
    arra[1]=cont[1];
    arra[2]=cont[2];
    cont[1]+=10;
    cont[2]+=16;
    arra[0]+=10;
    arra[1]+=16;
    cont[0]=cont[0]/double(ct[0]);
    cont[1]=cont[1]/double(ct[1]+2);
    cont[2]=cont[2]/double(ct[2]+1);
    arra[0]=arra[0]/double(ct[0]+1);
    arra[1]=arra[1]/double(ct[1]+2);
    arra[2]=arra[2]/double(ct[2]);
    if(!simil(arra[0]-cont[0],1.0))
        return;
    if(!simil(arra[2]-cont[2],1.0))
        return;
    if(!simil(arra[1]-cont[1],0.6))
        return;
    if(cont[1]>12||arra[1]<12)
        return;
    printf("%d\n",ct[0]);
}
int main() {
    //freopen("test.in","rev",stdin);
    //freopen("test.out","w",stdout);
    for(int i=1;i<=20;i++){
        num[i]=i;
        if(i>10)
            num[i]--;
        if(i>12)
            num[i]--;
        if(i>16)
            num[i]--;
    }
    base[0]=1;
    for(int i=1;i<=18;i++)
        base[i]=base[i-1]*3;

    int MN=129140163;
    for(int i=1;i<MN;i++)
        valid(i);
    return 0;
}
