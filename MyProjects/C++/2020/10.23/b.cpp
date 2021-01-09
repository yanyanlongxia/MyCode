//File: P3104.cpp
//Author: yanyanlongxia
//Date: 2020/10/26
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=1e3;
int n,a[N],sum,dout[N],xa[N],ya[N],now[N];
vector<int>ans;
bool cmp(int x,int y){
    return x>y;
}
bool valid(){
    sort(dout+1,dout+n+1,cmp);
    for (int i=1;i<=n;i++){
        if (!dout[i])
            continue;
        int xs=0,ys=0;
        int j=i+1;
        while (j<=n && dout[i])
        {
            dout[j]--;
            dout[i]--;
            j++;
        }
        if (dout[i])
            return false;
        if (j>n)
            continue;
        for (int k=i+1;k<j;k++)
            xa[++xs]=dout[k];
        for (int k=j;k<=n;k++)
            ya[++ys]=dout[k];
        merge(xa+1,xa+1+xs,ya+1,ya+1+ys,now+1+i,cmp);
        for (int k=i+1;k<=n;k++)
            dout[k]=now[k];
    }
    return true;
}
int main() {
    freopen("b.in","r",stdin);
    freopen("b.out","w",stdout);
    scanf("%d",&n);
    for (int i=1;i<=n+1;i++)
        scanf("%d",&a[i]);
    for (int i=1;i<=n+1;i++)
    {
        for (int j=1;j<i;j++)
            dout[j]=a[j];
        for (int j=i+1;j<=n+1;j++)
            dout[j-1]=a[j];
        if (valid())
            ans.push_back(i);
    }
    printf("%ld\n",ans.size());
    for(int i=0;i<ans.size();i++)
        printf("%d\n",ans[i]);
    return 0;
}
