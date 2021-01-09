//File: P5541.cpp
//Author: yanyanlongxia
//Date: 2020/12/12
//[USACO19FEB]Sleepy Cow Herding S
#include <bits/stdc++.h>
using namespace std;

int n,a[100005],x=0;

int ansmin(){
    if((a[n-1]-a[1]==n-2&&a[n]-a[n-1]>2)||(a[n]-a[2]==n-2&&a[2]-a[1]>2))
        return 2;
    int j=1;
    for(int i=1;i<=n;i++){
        while(j<n&&a[j+1]-a[i]<n)
            j++;
        x=max(x,j-i+1);
    }
    return n-x;
}
int ansmax(){
    return max(a[n-1]-a[1],a[n]-a[2])-n+2;
}
int main(){
    freopen("data.in","r",stdin);
    //freopen("P5541.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    printf("%d\n%d\n",ansmin(),ansmax());
    return 0;
}
