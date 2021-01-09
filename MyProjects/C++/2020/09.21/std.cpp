#include<bits/stdc++.h>
using namespace std;
#define int long long
pair<int,int>a[100010];
signed main()
{
    //freopen("std.in","r",stdin);
    //freopen("std.out","w",stdout);
    int t,n,i,ans;
    set<int>::iterator it;
    scanf("%lld",&t);
    while(t--)
    {
        set<int>st;
        ans=1100000000000000000ll;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
            scanf("%lld%lld",&a[i].second,&a[i].first);
        sort(a+1,a+n+1);
        st.insert(a[1].second);
        for(i=2;i<=n;i++)
        {
            it=st.lower_bound(a[i].second);
            if(it!=st.end())
                ans=min(ans,a[i].first*((*it)-a[i].second+1));
            if(it!=st.begin())
                ans=min(ans,a[i].first*(a[i].second-(*(--it))+1));
            st.insert(a[i].second);
        }
        printf("%lld\n",ans);
    }
    return 0;
}