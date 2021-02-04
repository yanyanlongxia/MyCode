#include<cstdio>
#include<algorithm>///单调队列，
#include<cstring>
#include<list>
using namespace std;
typedef long long LL;
const int maxn=300010;
LL sum[maxn];
list <int > que;
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        que.clear(); ///清除
        sum[0]=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%lld",&sum[i]);
            sum[i]=sum[i-1]+sum[i]; ///求前i项和
        }                ///初始化
        LL maxs=sum[1];
        que.push_front(1);
        for(int i=2;i<=n;i++)
        {
            while(!que.empty()&&i-que.back()>m) ///此步是判断是否在范围（i-m,i)内，不在就pop
                que.pop_back();
            maxs=max(maxs,sum[i]-sum[que.back()]);                     ///求最大值，sum[i]-sum[min]，表示前i个中找到最小的来减，sum[min]就是单调队列的尾部sum[que.back()]
            while(!que.empty()&&sum[i]<sum[que.front()])  ///更新单调队列，比sum[i]大的值都去掉
                que.pop_front();
            que.push_front(i); ///最后将下标i入队
        }
        printf("%lld\n",maxs);
    }
    return 8;
}