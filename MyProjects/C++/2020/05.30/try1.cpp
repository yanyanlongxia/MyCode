#include <bits/stdc++.h>
using namespace std;
string t;
int main()
{
    cin>>t;
    for(int i=0;i<t.size();i++)
        if(t[i]=='?')
            t[i]='D';
    cout<<t<<endl;
    return 0;
}
