//
// Created by admin on 2020/6/20.
//
#include <iostream>
using namespace std;
const int m=150005;
int n,k,fa[m],ans;
int get(int x)
{
    if(x==fa[x])
        return x;
    return fa[x]=get(fa[x]);//路径压缩并查集
}
int main()
{
    int d,x,y;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=3*n;i++)
        fa[i]=i;
    while(k--)
    {
        scanf("%d%d%d",&d,&x,&y);
        if(x>n||y>n)
        {
            ans++;
            continue;
        }
        int xs=x,xe=x+n,xn=x+2*n;//本身域，捕食域，天敌域
        int ys=y,ye=y+n,yn=y+2*n;
        if(d==1)//x与y是同类，全部赋值
        {
            if(get(xe)==get(ys)||get(xs)==get(ye))//矛盾
                ans++;
            else
            {
                fa[get(xs)]=get(ys);
                fa[get(xe)]=get(ye);
                fa[get(xn)]=get(yn);
            }
        }
        if (d==2)//x与y是天敌(同类的天敌是天敌)
        {
            if(x==y)//这是废话
            {
                ans++;
                continue;
            }
            if(get(xs)==get(ys)||get(xs)==get(ye))//矛盾
                ans++;
            else
            {
                fa[get(xe)]=get(ys);//合并x的捕食域和y的本身域
                fa[get(xs)]=get(yn);//合并x的本身域和y的天敌域
                fa[get(xn)]=get(ye);//合并x的天敌域和y的捕食域
            }
        }
    }
    printf("%d\n",ans);
}
