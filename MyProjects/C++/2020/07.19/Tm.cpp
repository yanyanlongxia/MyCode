//
// Created by admin on 2020/7/19.
//
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n, k, m, ra[2500000], xs[2500000], f[2500000], a[2500000], b[2500000], c[2500000];
char s[2500000];
int main()
{
    srand(time(NULL));
    cin>>n>>k>>m;
    scanf("%s", s + 1);
    s[0] = '0';
    for(int i = 0; i < k; i++)
        ra[i]=((ll)rand() << 15)^rand();
    for(int i = 2; i <= n; i++)
    {
        xs[i] = xs[i - 1];
        f[i] = f[i - 1];
        if(s[i] != s[i - 1])
        {
            xs[i]^=ra[i%k];
            f[i]+=i-(a[i%k] << 1);
            a[i % k]=i-a[i%k];
        }

        b[i] = a[i % k], c[i] = a[(i + 1) % k];
    }
    while(m--)
    {
        int l, r;
        scanf("%d%d",&l,&r);
        int sl=xs[l]^xs[r],ans=f[r]-f[l];
        if(s[l] == '1')
        {
            sl^=ra[l % k];
            ans-=l-(b[l] << 1);
        }
        if(s[r] == '1')
        {
            sl^=ra[(r + 1) % k];
            ans+=r-(c[r] << 1)+1;
        }

        printf("%d\n", sl ? -1 : ans / k);
    }
    return 0;
}
