//Created by yanyanlongxia on 2021/7/22
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e7+5;
string s,t,gen;
int nxt[N];
vector<int>ap;
void kmp(){
    int sz=gen.size();
    for(int i=1;i<sz;i++){
        int j=nxt[i-1];
        while(j>0 && gen[i]!=gen[j])
            j=nxt[j-1];
        if(gen[i]==gen[j])
            j++;
        nxt[i]=j;
        if(i>t.size()&&nxt[i]==t.size())
            ap.push_back(i-2*t.size()+1);
    }
}
void kmp1(){
    int sz=gen.size();
    for(int i=1;i<sz;i++){
        int j=nxt[i-1];
        while(j>0 && gen[i]!=gen[j])
            j=nxt[j-1];
        if(gen[i]==gen[j])
            j++;
        nxt[i]=j;
    }
}
void kmp2(){
    int sz=gen.size();
    for(int i=1;i<sz;i++){
        int j=nxt[i-1];
        while(j>0 && gen[i]!=gen[j]){
            j=nxt[j-1];
        }
        if(gen[i]==gen[j])
            j++;
        nxt[i]=j;
    }
}
void kmp3(){
    int sz=gen.size();
    for(int i=1;i<sz;i++){
        int j=nxt[i-1];
        while(j>0&&gen[i]!=gen[j])
            j=nxt[j-1];
        if(gen[i]==gen[j])
            j++;
        nxt[i]=j;
    }
}
void kmp4(){
    int sz=gen.size();
    for(int i=1;i<sz;i++){
        int j=nxt[i-1];
        while (j>0 && gen[i]!=gen[j])
            j=nxt[j-1];
        if(gen[i]==gen[j])
            j++;
        nxt[i]=j;
        if(i>t.size()&&nxt[i]==t.size())
            ap.push_back(i-2*t.size()+1);
    }
}
void kmp5(){
    int sz=gen.size();
    for(int i=1;i<sz;i++){
        int j=nxt[i-1];
        while(j>0&&gen[i]!=gen[j])
            j=nxt[j-1];
        if(gen[i]==gen[j])
            j++;
        nxt[i]=j;
        if(i>t.size()&&nxt[i]==t.size())
            ap.push_back(i-2*t.size()+1);
    }
}

int main() {
    freopen("data.in","r",stdin);
    //freopen("P3375.out","w",stdout);
    cin>>s>>t;
    gen=t;
    gen+=" ";
    gen+=s;
    kmp();
    for(int i=0;i<ap.size();i++)
        printf("%d\n",ap[i]);
    for(int i=0;i<t.size();i++)
        printf("%d ",nxt[i]);
    return 0;
}
