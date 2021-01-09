//File: P1659.cpp
//Author: yanyanlongxia
//Date: 2020/8/9
//[国家集训队]拉拉队排练
#include <bits/stdc++.h>
#define int long long
#define rg register
#define mo 19930726
using namespace std;
int n,k,p[10000005],cnt[10000005],ans=1,sum;
char s[10000005],sn[10000005];
int power(int a,int b)
{
    if(a==1)
        return 1;
    int res=1;
    for(;b;b>>=1)
    {
        if(b&1)
            res=res*a%mo;
        a=a*a%mo;
    }
    return res;
}
signed main() {
    scanf("%lld%lld",&n,&k);
    scanf("%s",(s+1));
    int len=n,id=0,mx=0;
    for (rg int i = 1; i <= len; ++i) {
        sn[i*2-1]='$';
        sn[i*2]=s[i];
    }
    sn[len=len*2+1]='$';
    for (rg int i = 1; i <= len; ++i) {
        if(i<mx)
            p[i]=min(mx-i,p[2*id-i]);
        else
            p[i]=1;
        while (i+p[i]<=len&&i-p[i]>=1&&sn[i+p[i]]==sn[i-p[i]])
            p[i]++;
        if(p[i]+i>mx)
        {
            mx=p[i]+i;
            id=i;
        }
        if((p[i]-1)%2==1)
            cnt[p[i]-1]++;
    }
    for(rg int i=n;i>=1;i--)
    {
        if(i%2==0)
            continue;
        sum+=cnt[i];
        if(k>=sum)
        {
            ans=(ans*power(i,sum))%mo;
            k-=sum;
        } else
        {
            ans=(ans*power(i,k))%mo;
            k-=sum;
            break;
        }
    }
    if(k>0)
        ans=-1;
    printf("%lld\n",ans);
    return 0;
}