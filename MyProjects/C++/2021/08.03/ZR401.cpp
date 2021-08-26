//Created by yanyanlongxia on 2021/8/15
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,-0x3f3f3f3f,sizeof(x))
using namespace std;
const int N=2e6;
int n,coi[N],blo[N],res[N],sta[N],top,rt[N],mam=-0x3f3f3f3f;
char s[N];
int main() {
    //freopen("data.in","r",stdin);
    //freopen("ZR401.out","w",stdout);
    scanf("%s",(s+1));
    n= strlen(s+1);
    for(int i=1;i<=n;i++){
        switch (s[i]) {
            case 'A':
                coi[i]=1;
                break;
            case 'B':
                blo[i]=-1;
                break;
            case 'C':
                blo[i]=1;
                break;
        }
        coi[i]+=coi[i-1];
        blo[i]+=blo[i-1];
    }
    for(int i=n;i>=1;i--){
        while(top&&blo[sta[top]]>blo[i])
            top--;
        if(!top)
            rt[i]=n;
        else {
            rt[i] = sta[top];
            if(blo[sta[top]]<blo[i])
                rt[i]=i;
        }
        if(blo[sta[top]]!=blo[i])
            sta[++top]=i;
    }
    for(int i=1;i<=n;i++) {
        if (s[i] != 'B') {
            res[i] = coi[rt[i]] - coi[i - 1];
            mam = max(res[i], mam);
        }else{
            res[i]=0;
            mam= max(res[i],mam);
        }
    }/*
    for(int i=1;i<=n;i++)
        printf("%d ",i);
    puts("");
    for(int i=1;i<=n;i++)
        printf("%d ",blo[i]);
    puts("");
    for(int i=1;i<=n;i++)
        printf("%d ",coi[i]);
    puts("");
    for(int i=1;i<=n;i++)
        printf("%d ",rt[i]);
    puts("");*/
    printf("%d\n",mam);
    return 0;
}

