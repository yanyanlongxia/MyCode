#include<bits/stdc++.h>
using namespace std;
struct state{
    int st[1100];
    int num=0;
}b[110];
int f[1100][1100][2];
int a[110][20];
int s[110],sum[1100];
int n,m,ans,t=1;
int main(){
    scanf("%d%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            char c;cin>>c;
            s[i]=s[i]*2+(c=='P');//记录每一行状态
        }
    for(int i=0;i<(1<<m);i++)
        for(int j=0;j<m;j++)
            if(i&(1<<j)) sum[i]++;//记录每一种状态有几个炮兵
    for(int i=1;i<=n;i++)//枚举每一行
        for(int j=0;j<(1<<m);j++)//枚举当前行的状态
            if((j|s[i])==s[i]&&!(j&(j<<1))&&!(j&(j<<2)))//不冲突
                b[i].st[++b[i].num]=j;//记录当前行可行状态
    for(int i=1;i<=b[1].num;i++) f[0][b[1].st[i]][0]=sum[b[1].st[i]];//初始化第一行
    for(int i=1;i<=b[2].num;i++)//初始化第二行
        for(int j=1;j<=b[1].num;j++){
            int k=b[2].st[i],l=b[1].st[j];
            if(k&l) continue;
            f[l][k][1]=max(f[l][k][1],f[0][l][0]+sum[k]);
        }
    for(int i=3;i<=n;i++){//枚举行
        t^=1;//滚动数组
        for(int j=1;j<=b[i].num;j++)//第i行状态
            for(int k=1;k<=b[i-1].num;k++)//第i-1行状态
                if(!(b[i].st[j]&b[i-1].st[k]))//第i行与第i-1行不冲突
                    for(int l=1;l<=b[i-2].num;l++)//第i-2行状态
                        if(!(b[i].st[j]&b[i-2].st[l])&&!(b[i-1].st[k]&b[i-2].st[l]))//第i行与第i-2行以及第i-1行与第i-2行不冲突
                            f[b[i-1].st[k]][b[i].st[j]][t]=max(f[b[i-2].st[l]][b[i-1].st[k]][t^1]+sum[b[i].st[j]],f[b[i-1].st[k]][b[i].st[j]][t]);//更新答案
    }
    for(int i=1;i<=b[n].num;i++)
        for(int j=1;j<=b[n-1].num;j++)
            ans=max(ans,f[b[n-1].st[j]][b[n].st[i]][t]);//更新最优解
    cout<<ans<<endl;
    return 0;
}