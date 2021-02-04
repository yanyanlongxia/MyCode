//File: illusion.cpp
//Author: yanyanlongxia
//Date: 2020/10/30
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=4e4;
string st,name[200];
int ans,m;
bool check(int i){
    if (name[i].size()!=st.size()-1 && st.size()!=name[i].size()-1)
        return false;
    int pos=-1,k=0;
    string ms,ls;
    if (name[i].size()>st.size())
    {
        ms=name[i];
        ls=st;
    }else{
        ms=st;
        ls=name[i];
    }
    for (int j=0; j < ls.size(); j++)
    {
        if (ls[j]!=ms[k]){
            if (pos!=-1)
                return false;
            pos=k;
            k++;
        }
        k++;
    }
    return true;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("illusion.out","w",stdout);
    cin>>st;
    cin>>m;
    for (int i=1;i<=m;i++)
        cin>>name[i];
    for (int i=1;i<=m;i++)
        if (check(i))
            ans++;
    cout<<ans<<endl;
    return 0;
}
