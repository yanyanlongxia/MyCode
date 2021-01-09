#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,v,b,w,t;
    cin>>a>>v>>b>>w>>t;
    if(llabs(a-b)<=t*(v-w))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}