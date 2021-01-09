#include<map>
#include<set>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define inf 1000000000
#define ll long long
using namespace std;
ll read()
{
	ll x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
struct data{
	int a,b;
	friend bool operator<(data a,data b){
		return a.a<b.a;
	}
}a[100005];
int n,m;
int v[2000005],f[2000005];
int main()
{
	//freopen("mining.in","r",stdin);
	//freopen("mining.out","w",stdout);
	memset(f,-1,sizeof(f));
	n=read();m=read();
	for(int i=1;i<=n;i++)
		a[i].b=read(),a[i].a=read();
	sort(a+1,a+n+1);
	int now=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i].a-a[i-1].a>17)now+=18,v[now]+=a[i].b;
		else now+=a[i].a-a[i-1].a,v[now]+=a[i].b;
	}
	int ans=0;
	f[0]=0;
	for(int i=0;i<=now;i++)
		if(f[i]!=-1)
		{
			f[i+4]=max(f[i+4],f[i]+v[i+4]);
			f[i+7]=max(f[i+7],f[i]+v[i+7]);
			ans=max(ans,f[now]);
		}
	printf("%d\n",ans);
	return 0;
}
