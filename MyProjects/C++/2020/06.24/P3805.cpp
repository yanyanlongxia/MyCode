//
// Created by admin on 2020/6/26.
//
#include <bits/stdc++.h>
using namespace std;
string st;
char sn[44000000];
int p[44000000];
int main()
{
    getline(cin,st);
    sn[0]='$';
    sn[1]='#';
    int len=2,max_len=-1,id=0,mx=0;
    for(int i=0;i<st.size();i++)
    {
        sn[len++]=st[i];
        sn[len++]='#';
    }
    sn[len]='\0';
    for(int i=1;i<len;i++)
    {
        if(i<mx)
            p[i]=min(p[2*id-i],mx-i);
        else
            p[i]=1;
        while(sn[i+p[i]]==sn[i-p[i]])
            p[i]++;
        if(mx<i+p[i])
        {
            id=i;
            mx=i+p[i];
        }
        max_len=max(max_len,p[i]-1);
    }
    cout<<max_len<<endl;
}
