//
// Created by admin on 2020/6/26.
//
#include <bits/stdc++.h>
//#define int long long
using namespace std;
int n,m;
pair<string,int> a[100005];
int cal(int bit,int num)  //将第bit位进行题中n次运算
{
    for(int i=1;i<=n;i++)
    {
        int x=a[i].second>>bit&1; //取第bit位
        if(a[i].first=="AND")
            num&=x;
        else
        {
            if(a[i].first=="OR")
                num|=x;
            else
                num^=x;
        }
    }
    return num;
}
signed main()
{
    string str;
    int x;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>str>>x;
        a[i]=make_pair(str,x);
    }
    int val=0,ans=0,sol1=0,sol0=0;
    for(int bit=29;bit>=0;bit--)
    {
        sol0=cal(bit,0);
        sol1=cal(bit,1);
        if(sol0==1)
            ans+=sol0<<bit;
        else
        {
            if(val+(1<<bit)<=m&&sol1==1)
                val+=1<<bit,ans+=sol1<<bit;
            //else
            //    ans+=sol0<<bit;
        }
        //if(val+(1<<bit)<=m && sol1>=sol0)    //对比决策，填上1更优，还是填上0更优
        //{
        //    val+=1<<bit;
        //    ans+=sol1<<bit;  //填1
        //}
        //else
        //    ans+=sol0<<bit;    //填0
    }
    cout<<ans<<endl;
}