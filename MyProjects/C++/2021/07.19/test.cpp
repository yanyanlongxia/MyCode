#include <bits/stdc++.h>
using namespace std;
int n,m;
struct kmp
{
    char s[1000010],t[1000010];
    int Next[1000010];
    void Pre_KMP()
    {
        for (int i=0;i<=m;i++)
            Next[i]=0;
        int j=0,k=-1;
        Next[0]=-1;
        while(j<m)
        {
            if (k==-1||t[j]==t[k]) Next[++j]=++k;
            else k=Next[k];
        }
    }
    int KMP()
    {
        int i=0,j=0;
        while(i<n&&j<m)
        {
            if (j==-1||s[i]==t[j]) i++,j++;
            else j=Next[j];
        }
        if (j==m) return i-m;
        else return -1;
    }
}K;
int main(){
    freopen("data.in","r",stdin);
    scanf("%s",(K.s));
    scanf("%s",(K.t));
    n= strlen(K.s);
    m= strlen(K.t);
    K.Pre_KMP();
    printf("%d\n",K.KMP());
    return 0;
}
