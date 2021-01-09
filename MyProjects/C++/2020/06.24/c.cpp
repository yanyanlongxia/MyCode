#include <bits/stdc++.h>
#define int long long
using namespace std;
int x,z;
int gcd(int a,int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int lcm(int a,int b)
{
    return a * b / gcd(a,b);
}
signed main()
{
    cin>>x>>z;
    for(int i=1;i<=z;i++)
        if(z%i==0&&i%x!=0)
            if(lcm(x,i)==z)
            {
                cout<<i<<endl;
                return 0;
            }
    return 0;
}
