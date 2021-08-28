//Created by yanyanlongxia on 2021/8/26
//
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
int las=0;
int main() {
    //freopen("data.in","r",stdin);
    //freopen("test.out","w",stdout);
    /*for(int i=1;i<=1000;i++){
        for(int j=i;j<=1000;j++)
            for(int k=j;k<=1000;k++){
                int res=i+j+k;
                if(res%i!=0)
                    continue;
                if(res%j!=0)
                    continue;
                if(res%k!=0)
                    continue;
                if(res%3==0)
                    continue;
                if(res==las)
                    printf("FALSE");
                las=res;
                printf("%d %d %d %d\n",i,j,k,res);
            }
    }*/
    ull res=1ll*2222222*2222222*2222222;
    printf("%llu\n",res);
    return 0;
}
