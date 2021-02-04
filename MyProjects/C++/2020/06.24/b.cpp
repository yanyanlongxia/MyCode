#include <bits/stdc++.h>
using namespace std;
int n;
char str[150000];
bool possible(int x)
{
    for(int i=1;i<=x;i++)
        for(int j=i;j<=n;j+=x)
            if(str[i]!=str[j])
                return false;
    return true;
}
int main()
{
    cin>>n;
    cin>>str+1;
    for(int i=1;i<=n;i++)
        if(n%i==0)
            if(possible(i)==1)
            {
                cout<<i<<endl;
                return 0;
            }
    return 0;
}
