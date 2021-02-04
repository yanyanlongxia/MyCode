#include<bits/stdc++.h>
using namespace std;
const int num[5]={2,3,5,7,13};
int a[10000][2],size,n;
int main()
{
	cin>>n;
	size=4;
	a[0][0]=2; a[0][1]=0;
	a[1][0]=3; a[1][1]=0;
	a[2][0]=5; a[2][1]=0;
	a[3][0]=13; a[3][1]=0;
	if(n==2||n==3||n==5||n==7||n==13)
    {
	    cout<<0<<endl;
	    return 0;
    }
	while(1)
	{
		for(int j=0;j<=size;j++)
			for(int i=0;i<=4;i++)
			{
				size++;
				a[size][0]=a[j][0]+num[i];
				a[size][1]=a[j][i]+1;
                if(a[size][0]==n)
                {
                    cout<<a[size][1]<<endl;
                    return 0;
                }
                size++;
                a[size][0]=a[j][0]-num[i];
                a[size][1]=a[j][i]+1;
                if(a[size][0]==n)
                {
                    cout<<a[size][1]<<endl;
                    return 0;
                }
                size++;
                a[size][0]=a[j][0]*num[i];
                a[size][1]=a[j][i]+1;
                if(a[size][0]==n)
                {
                    cout<<a[size][1]<<endl;
                    return 0;
                }
			}
	}
	return 0;
}
