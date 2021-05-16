//Created by yanyanlongxia on 2021/5/12
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
int t,n;
bool exi[30];
char ch[100000];
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF1520A.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        scanf("%s",(ch+1));
        clm(exi);
        bool doub=true;
        for(int i=1;i<=n;i++){
            if(exi[ch[i]-'A']&&ch[i]!=ch[i-1]){
                doub=false;
                break;
            }
            exi[ch[i]-'A']=true;
        }
        if (doub)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
