//Created by yanyanlongxia on 2021/8/15
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,-0x3f3f3f3f,sizeof(x))
using namespace std;

int main() {
    //freopen("maker.in","r",stdin);
    //freopen("tmp.in","w",stdout);
    srand(time(0));
    int n=rand()%3000+1;
    //int n=5;
    for(int i=1;i<=n;i++){
        int tp=rand()%3;
        printf("%c",'A'+tp);
    }
    puts("");
    return 0;
}
