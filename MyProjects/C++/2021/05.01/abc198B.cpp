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
const int N=1e4;
int n;
char st[N];
bool valid(){
    for(int i=1;i<=n/2;i++)
        if(st[i]!=st[n-i+1])
            return false;
    return true;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("abc198B.out","w",stdout);
    scanf("%s",(st+1));
    n=strlen(st+1);
    while(st[n]=='0')
        n--;
    if(valid())
        puts("Yes");
    else
        puts("No");
    return 0;
}
