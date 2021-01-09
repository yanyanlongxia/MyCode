//File: email.cpp
//Author: yanyanlongxia
//Date: 2020/9/20
//
#include <bits/stdc++.h>

using namespace std;
char s[1000005];
int n;
bool ipat[10005],ipdot[10005];
char res[10005],rs;
int main() {
    freopen("email.in","r",stdin);
    freopen("email.out","w",stdout);
    scanf("%s",(s+1));
    n=strlen(s+1);
    for (int i=2;i<n-2;i++)
        if (s[i]=='d' && s[i+1]=='o' && s[i+2]=='t')
            ipdot[i]=true;
    for (int i=2;i<n-1;i++)
        if (s[i]=='a' && s[i+1]=='t')
        {
            ipat[i]=true;
            break;
        }
    int i=1;
    while (i<=n)
    {
        if (ipat[i])
        {
            res[++rs]='@';
            i+=2;
            continue;
        }
        if (ipdot[i])
        {
            res[++rs]='.';
            i+=3;
            continue;
        }
        res[++rs]=s[i];
        i++;
    }
    for (int j=1;j<=rs;j++)
        printf("%c",res[j]);
    puts("");
    return 0;
}
