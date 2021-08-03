//Created by yanyanlongxia on 2021/7/30
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
set<int>s;
int main() {
    //freopen("testset.in","r",stdin);
    //freopen("testset.out","w",stdout);
    s.insert(1);
    s.insert(2);
    //for(int i=234;i<=2355;i++)
        //s.insert(i)
        s.erase(s.find(1));
    for(auto a=s.begin();a!=s.end();a++)
        printf("%d\n",*a);

    //s.clear();
    printf("%d\n",s.size());
    return 0;
}
