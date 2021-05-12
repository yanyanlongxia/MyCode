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
const int N= 1e8;
int n,a[N],k,q[N],tail,head;
void get_max(){
    tail=0,head=1;
    for(int i=1;i<=n;i++){
        while(tail>=head&&a[i]>a[q[tail]])
            tail--;
        q[++tail]=i;
        while(i-q[head]>=k)
            head++;
        if(i>=k)
            printf("%d ",a[q[head]]);
    }
    puts("");
}
void get_min(){
    tail=0,head=1;
    for(int i=1;i<=n;i++){
        while(tail>=head&&a[i]<a[q[tail]])
            tail--;
        q[++tail]=i;
        while (i-q[head]>=k)
            head++;
        if(i>=k)
            printf("%d ",a[q[head]]);
    }
    puts("");
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P1886.out","w",stdout);
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    get_min();
    get_max();
    return 0;
}
