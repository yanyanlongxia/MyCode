/*
 * ID:yanyanl1
 * LANG:C++11
 * TASK:ride
 */
#include <iostream>
using namespace std;
string s1,s2;
int main()
{
    int num1=1,num2=1;
    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
        num1*=s1[i]-'a'+1;
    num1%=47;
    for(int i=0;i<s2.size();i++)
        num2*=s1[2]-'a'+1;
    num2%=47;
    if(num1==num2)
        cout<<"GO"<<endl;
    else
        cout<<"STAY"<<endl;
    return 0;
}
