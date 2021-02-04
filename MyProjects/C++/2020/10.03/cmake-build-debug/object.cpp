#include<iostream>
using namespace std;
int main()
{
int a;
int b;
cin>>a>>b;
a=a+b;
b=a-b;
a=a-b;
for(int i=1;i<=10;i+=1){
a=a+b;
}
cout<<a;
return 0;
}
