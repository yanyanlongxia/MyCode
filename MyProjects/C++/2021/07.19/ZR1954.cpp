//Created by yanyanlongxia on 2021/7/23
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e6;
int n,k,a[N];
bool check(int x) {
    int i = 0, j, u = 0;
    while (u<=x&&i+1<=n){
        u++;
        j=a[i+1];
        while(a[i+1]<=j+k&&i+1<=n)
            i++;
    }
    return u<=x;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR1954.out","w",stdout);
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    sort(a + 1, a + n + 1);
    int l = 0, r = n;
    while (r - l > 1) {
        int mid = l + r >> 1;
        if (check(mid))
            r = mid;
        else
            l = mid;
    }

    printf("%d\n", r);
    return 0;
}
