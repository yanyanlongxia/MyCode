#include <bits/stdc++.h>
using namespace std;
int n,m,nn;
struct edge
{
    int a,b;
}ed[5000000];
struct node
{
    int c,index;
}no[500000];
void deletee(int x)  //删除一条边
{
    for(int i=x;i<m;i++)
        ed[i]=ed[i+1];
    m--;
}
void deleten(int x)  //删除一个节点
{
    for(int i=1;i<=m;i++)
        if(ed[i].a==x||ed[i].b==x)
            deletee(i);  //删除所有与该节点相关的边
    for(int i=x;i<n;i++)
        no[i]=no[i+1];
    n--;
}
bool all()  //检查是否每个节点的度都为零
{
    for(int i=1;i<=n;i++)
        if(no[i].c!=0)
            return 0;
    return 1;
}
set<int> is;  //最大独立子集
int main()
{
    freopen("b3.in","r",stdin);
    freopen("b3.out","w",stdout);
    int a,b;
    scanf("%d%d",&n,&m);
    nn=n;
    for(int i=1;i<=n;i++)
        no[i].index=i;
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d",&a,&b);
        ed[i].a=a;ed[i].b=b;  //插入边
        no[a].c++;no[b].c++;  //边两边的度分别加一
    }
    while(!all())  //一直删除最大度节点，直到所有节点的度都为零
    {
        int maxn=0,man=0;
        for(int i=1;i<=n;i++)  //找出最大度
            if(no[i].c>maxn) {
                maxn = no[i].c;
                man = i;
            }
        deleten(man);
    }
    printf("%d\n",n);
    for(int i=1;i<=n;i++)
        is.insert(no[i].index);
    for(int i=1;i<nn;i++)
    {
        if(is.find(i)==is.end())
            printf("0 ");
        else
            printf("1 ");
    }
    if(is.find(nn)==is.end())
        printf("0\n");
    else
        printf("1\n");
    return 0;
}
