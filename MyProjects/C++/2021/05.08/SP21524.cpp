//Created by yanyanlongxia on 2021/5/13
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e7;
string s,t,gen;
int q,m,n,pi[N];
vector<int>res;
int main() {
    freopen("data.in","r",stdin);
    //freopen("SP21524.out","w",stdout);
    scanf("%d",&q);
    while(q--){
        res.clear();
        cin>>t>>s;
        n=s.size(),m=t.size();
        gen=s+"@";
        gen+=t;
        for(int i=1;i<gen.size();i++){
            int j=pi[i-1];
            while (j&&gen[i]!=gen[j])
                j=pi[j-1];
            if(gen[i]==gen[j])
                j++;
            pi[i]=j;
            if(pi[i]==n)
                res.push_back(i-2*n+1);
        }
        if(res.empty()){
            puts("Not Found");
            continue;
        }
        printf("%zu\n",res.size());
        for(int i=0;i<res.size();i++)
            printf("%d ",res[i]);
        puts("");
    }
    return 0;
}
