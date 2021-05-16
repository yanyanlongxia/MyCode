//Created by yanyanlongxia on 2021/5/14
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
int prime[]={2,3,4,5,7,9,11,13,17,19,21,23,25,29,31,37,41,43,47,49};
int cnt=0;
char res[10];
int main() {
    //freopen("CF679A.in","r",stdin);
    //freopen("CF679A.out","w",stdout);
    for(int i:prime){
        printf("%d\n",i);
        fflush(stdout);
        scanf("%s",(res+1));
        if(res[1]=='y'&&(++cnt)==2){
            puts("composite");
            return 0;
        }
    }
    puts("prime");
    return 0;
}
