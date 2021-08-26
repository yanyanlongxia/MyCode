//Created by yanyanlongxia on 2021/8/15
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,-0x3f3f3f3f,sizeof(x))
using namespace std;
const int N=2e6;
int n,coi[N],blo[N],ans=-0x3f3f3f3f;
char s[N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("bf.out","w",stdout);
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
    }
    for(int i=1;i<=n;i++){
        if (blo[i]==-1) {
            ans= max(ans,0);
            continue;
        }
        int cublo=0,cucoi=0;
        cublo=blo[i]+1;cucoi=coi[i];
        int j=i+1;
        while(cublo+blo[j]&&j<=n){
            cublo+=blo[j];
            cucoi+=coi[j];
            j++;
        }
        ans= max(ans,cucoi);
    }
    printf("%d\n",ans);
    return 0;
}
