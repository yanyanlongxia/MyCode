//
// Created by admin on 2020/7/23.
//
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int MAX=0;
string s_sys[1000005],s_sys2[1000005];
void al_unk(){
    while(1){
        cout<<"不要hack我！"<<endl;
    }
}
int randint(int low=0,int high=1){
    int r=rand()%(high-low+1)+low;
    return r;
}
signed main() {
    srand((unsigned)time(NULL));
    cout<<"唤醒小X中...";
    Sleep(1000);
    system("CLS");
    while(1){
        cout<<"您好，我叫小X机器人。如果你想知道我有什么功能，对我说：find";
        string s;
        cin>>s;
        if(s=="find"){
            cout<<"欢迎使用小X，我有以下功能"<<endl;
            cout<<"1.清屏功能，对我说：CLS"<<endl;
            cout<<"2.计算功能，对我说：Calcul"<<endl;
            cout<<"3.输出随机数，对我说：Rand"<<endl;
            cout<<"4.询问一些知识，对我说：Question"<<endl;
            cout<<"5.小游戏，对我说：Game"<<endl;
            cout<<"6.退出，回主页：Back"<<endl;
            cout<<"现在就对我说：Back试试"<<endl;
            string s2;
            while(cin>>s2){
                if(s2=="Back"){
                    break;
                }
                else{
                    cout<<"请对我说：Back"<<endl;
                }
            }
        }
        else if(s=="CLS"){
            system("CLS");
            cout<<"回主页中...";
            Sleep(1000);
            system("CLS");
        }
        else if(s=="Calcul"){
            cout<<"请你说：计算的第一个数+空格+计算符号+空格+计算的第二个数"<<endl;
            cout<<"目前支持的运算符有：+，-，*，/，%，^，&，|"<<endl;
            cout<<"数据不能超过100000，不然会出锅"<<endl;
            int a,b;
            char c;
            cin>>a>>c>>b;
            if(a>100000||b>100000){
                al_unk();
            }
            if(c=='+'){
                cout<<a+b;
            }
            else if(c=='-'){
                cout<<a-b;
            }
            else if(c=='*'){
                cout<<a*b;
            }
            else if(c=='/'){
                if(b==0){
                    al_unk();
                }
                cout<<a/b;
            }
            else if(c=='%'){
                if(b==0){
                    al_unk();
                }
                cout<<a%b;
            }
            else if(c=='^'){
                cout<<(a^b);
            }
            else if(c=='&'){
                cout<<(a&b);
            }
            else if(c=='|'){
                cout<<(a|b);
            }
            else{
                cout<<"Sorry<( _ _ )>，没有这个计算符号";
                Sleep(1000);
                al_unk();
            }
            cout<<endl;
            Sleep(2000);
        }
        else if(s=="Rand"){
            cout<<"告诉我上下限制，不能超过10000哦，不然会出锅"<<endl;
            int a,b;
            cin>>a>>b;
            if(a>10000||b>10000||a>b){
                al_unk();
            }
            cout<<randint(a,b);
            cout<<endl;
            Sleep(2000);
        }
        else if(s=="Question"){
            cout<<"我还不知道特别多知识，如果你想告诉我知识，发送邮件到2780034817@qq.com。"<<endl;
            cout<<"你也可以私信(吉祥物)郑煦翔哦";
            cout<<"格式：关键词+空格+关键词返回信息";
            string s;
            cin>>s;
            int i;
            for(i=1;i<=MAX;i++){
                if(s==s_sys[i]){
                    cout<<s_sys2[i];
                    break;
                }
            }
            if(i>MAX){
                cout<<"没有此词条，私信即可载入";
            }
            cout<<endl;
            Sleep(2000);
        }
        else if(s=="Game"){
            cout<<"目前游戏少，如果你有游戏函数程序，发送邮件到2780034817@qq.com。"<<endl;
            cout<<"你也可以私信(吉祥物)郑煦翔哦";
            cout<<"直接发程序即可";
            string s;
            cin>>s;
            int i=1;
            if(i>MAX){
                cout<<"没有此游戏，私信即可载入";
            }
            cout<<endl;
            Sleep(2000);
        }

    }
    return 0;
}
