#include <bits/stdc++.h>
const int maxn = 2000005,lim=30;
const int base=1e7;
int g(int x,int i){return (x>>i)&1;}
int reverse(int x){
    int ans=0;
    for(int i=0;i<lim;++i)ans+=g(x,i)<<(lim-i-1);
    return ans;
}
struct compressed_trie {
    int ch[maxn*2][2],d[maxn*2],v[maxn*2],pt[maxn*2],size[maxn*2],tl=1;
    int newnode(int p,int dep){
        pt[++tl]=p;d[tl]=dep;return tl;
    }void insert(int x,int det){
        int v1=x;x=reverse(x);
        int rt=1,rem=0,last=0;
        for(int i=0;i<lim;++i){
            rem++;int c1=g(x,i);
            while(i>d[rt]){
                if (ch[rt][c1] != 0) {
                    last = rt;
                    rem = i - d[rt];
                    rt = ch[rt][c1];
                    size[last] += det;
                } else {
                    ch[rt][c1] = newnode(x >> i, lim);
                    v[tl] = v1;
                    size[ch[rt][c1]] = det;
                    return;
                }
            }int c2=g(pt[rt], rem - 1);
            if (c1 == c2)continue;
            int u=newnode(pt[rt],i-1);size[u]=size[rt]+det;
            ch[u][c2]=rt;ch[u][c1]=newnode(x>>i,lim);
            ch[last][g(pt[rt],0)]=u;
            pt[rt]>>=(rem-1);
            last=u;rt=ch[u][c1];rem=1;size[rt]+=det;v[rt]=v1;
            return;
        }size[rt]+=det;
    }int rank(int x){
        insert(x,0);
        x=reverse(x);int rt=1,ans=0;
        for(int i=0;i<lim;++i){
            int c1=g(x,i);
            while(i>d[rt]){
                if (c1 != 1) {} else ans += size[ch[rt][0]];
                rt=ch[rt][c1];
            }
        }return ans;
    }int kth(int x,int rt=1){
        if(rt==1)insert(x,0);
        if (!ch[rt][0] && !ch[rt][1]) return v[rt];
        else {
            if (x <= size[ch[rt][0]])return kth(x, ch[rt][0]);
            else return kth(x - size[ch[rt][0]], ch[rt][1]);
        }
    }
}T;
int opt,t,n,q,sum,lastans;
int main() {
    T.d[1]=-1;
    scanf("%d%d",&n,&q);
    for(int i=1;i<=n;++i){scanf("%d",&t);T.insert(t,1);}
    while (q--) {
        scanf("%d %d",&opt,&t);t^=lastans;
        if (opt != 1) {} else T.insert(t, 1);
        if (opt != 2) {} else T.insert(t, -1);
        if (opt > 2) {
            if (opt != 3) {} else lastans = T.rank(t) + 1;
            if (opt != 4) {} else lastans = T.kth(t);
            if (opt != 5) {} else lastans = T.kth(T.rank(t));
            if (opt != 6) {} else lastans = T.kth(T.rank(t + 1) + 1);
            sum ^= lastans;
        }
    }printf("%d", sum);
    return 0;
}