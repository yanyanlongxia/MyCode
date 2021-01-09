#include <bits/stdc++.h>
using namespace std;
int n,k,t;
int main()
{
    cin>>n>>k>>t;
    if(n>=t)
    {
        cout<<n-t<<endl;
        return 0;
    }
    else
    {
        int b;
        if((t-n)%(k-1)!=0)
            b=(t-n)/(k-1)+1;
        else
            b=(t-n)/(k-1);  //2
        int c=b+n+b*(k-1)-t;  //2+1+6-6
        cout<<c<<endl;
        return 0;
    }
}