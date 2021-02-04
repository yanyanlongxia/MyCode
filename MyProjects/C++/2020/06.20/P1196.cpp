#include<bits/stdc++.h>
using namespace std;
const int n=30005;
int fa[n],dis[n],size[n],t;
int find(int x)
{
    int ff;
    if(x==fa[x])
        return x;
    ff=find(fa[x]); //递归查找代表
    dis[x]+=dis[fa[x]]; //累积到树根距离，若已加过，则此次操作等效于加0
    return fa[x]=ff;
}
int main()
{
    for(int i=1;i<=30000;i++)
        size[i]=1,fa[i]=i;//初始化
    char s;int x,y;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>s>>x>>y;
        int fx=find(x),fy=find(y);
        if(s=='M')
        {
            fa[fx]=fy;  //指定树根
            dis[fx]=size[fy]; //前缀增加
            size[fy]+=size[fx]; //大小累加
        }
        else
        {
            if(fx!=fy) cout<<-1<<endl; //不在同一列
            else
                cout<<abs(dis[x]-dis[y])-1<<endl; //输出
        }
    }
}