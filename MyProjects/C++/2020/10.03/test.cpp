#include <bits/stdc++.h>
using namespace std;
char t[1000005];
void del_char(char* str)
{
    char *p = str;
    char *q = str;
    while(*q==' ')
    {
        q++;
    }
    while (*q)
    {
        *p++=*q;
        q++;
    }
    *p='\0';
}

int main()
{
    scanf("%[^\n]",t);
    del_char(t);
    printf("%s\n",t);
    return 0;
}