//Created by yanyanlongxia on 2021/5/7
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
char alp[50];
int main() {
    //freopen("maker.in","r",stdin);
    //freopen("data.in","w",stdout);
    srand(time(0));
    int s1=rand()%10+1,s2=rand()%10+1,s3=rand()%10+1;
    while(s1>s3 || s2>s3){
        s1=rand()%10+1,s2=rand()%10+1,s3=rand()%10+1;
    }
    alp[1]='a';
    for(int i=2;i<=26;i++)
        alp[i]=alp[i-1]+1;
    string x,y,z;
    x.resize(s1);
    y.resize(s2);
    z.resize(s3);
    for(int i=0;i<s1;i++)
        x[i]=alp[rand()%26+1];
    for(int i=0;i<s2;i++)
        y[i]=alp[rand()%26+1];
    for(int i=0;i<s3;i++)
        z[i]=alp[rand()%26+1];
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    return 0;
}
