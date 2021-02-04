//File: language.cpp
//Author: yanyanlongxia
//Date: 2020/10/4
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
set<string>var;
char s[1000005],st[1000005];
string substr(char t[],int i,int j)
{
    string res;
    for (;i<=j;i++)
        res+=t[i];
    return res;
}
void solveinput(char t[])
{
    vector<string>stt;
    stt.clear();
    int i=6,j=6;
    while (max(i,j)<strlen(t))
    {
        while (t[j]!=','&&j<strlen(t))
            j++;
        string sub=substr(t,i,j-1);
        if (var.find(sub)==var.end())
        {
            var.insert(sub);
            cout<<"int "<<sub<<";\n";
        }
        stt.push_back(sub);
        i=j+1;
        j=i;
    }
    cout<<"cin";
    for (int k=0;k<stt.size();k++)
        cout<<">>"<<stt[k];
    cout<<";\n";
}
void solveprint(char t[])
{
    vector<string>stt;
    stt.clear();
    int i=6,j=6;
    while (max(i,j)<strlen(t))
    {
        while (t[j]!=','&&j<strlen(t))
            j++;
        string sub=substr(t,i,j-1);
        stt.push_back(sub);
        i=j+1;
        j=i;
    }
    cout<<"cout";
    for (int k=0;k<stt.size();k++)
        cout<<"<<"<<stt[k];
    cout<<";\n";
}
void filter(char* str) {
    char *p = str;
    char *q = str;
    while (*q == ' ')
        q++;
    while (*q) {
        *p++ = *q;
        q++;
    }
    *p = '\0';
}
void solveother(char t[])
{
    int j=0;
    if (substr(t,j,2)=="let")
        j=3;
    while (t[j]!='=')
        j++;
    string sub=substr(t,0,j-1);
    if (var.find(sub)==var.end())
    {
        var.insert(sub);
        cout<<"int "<<sub<<";\n";
    }
    printf("%s;\n",t);
}
void solvefor(char t[])
{
    printf("for(int ");
    int j=4;
    while (t[j]!='=')
        j++;
    string sub=substr(t,4,j-1);
    cout<<sub<<"=";
    string interval="1";
    string inti,term;
    int k=j+1;
    while (t[k]!=' ')
        k++;
    inti=substr(t,j+1,k-1);
    j=k+4;
    k=j;
    while (t[k]!=' ' && t[k]!='\n' &&t[k]!='\0')
        k++;
    term=substr(t,j,k-1);
    if (t[k]!='\n' && t[k]!='\0')
    {
        j=k+6;
        while (t[j]!='\n' && t[j]!='\0')
            j++;
        interval=substr(t,k+6,j-1);
    }
    cout<<inti<<";"<<sub;
    if (interval[0]=='-')
        cout<<">=";
    else
        cout<<"<=";
    cout<<term<<";"<<sub<<"+="<<interval<<")";
    printf("{\n");
    scanf("%[^\n]",st);
    filter(st);
    getchar();
    while (true)
    {
        if (substr(st,0,4)=="input")
            solveinput(st);
        else
        {
            if (substr(st,0,4)=="print")
                solveprint(st);
            else
            {
                if (substr(st,0,2)=="for")
                    solvefor(st);
                else
                    solveother(st);
            }
        }
        scanf("%[^\n]",st);
        filter(st);
        getchar();
        if (substr(st,0,3)=="next")
        {
            printf("}\n");
            return;
        }
    }
}
int main() {
    freopen("source.bas","r",stdin);
    freopen("object.cpp","w",stdout);
    printf("#include<iostream>\n");
    printf("using namespace std;\n");
    printf("int main()\n");
    printf("{\n");
    scanf("%[^\n]",s);
    filter(s);
    while (getchar()!=EOF)
    {
        if (substr(s,0,4)=="input")
            solveinput(s);
        else
        {
            if (substr(s,0,4)=="print")
                solveprint(s);
            else
            {
                if (substr(s,0,2)=="for")
                    solvefor(s);
                else
                    solveother(s);
            }
        }
        scanf("%[^\n]",s);
        filter(s);
    }
    printf("return 0;\n");
    printf("}\n");
    return 0;
}
