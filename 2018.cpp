#include<iostream>
using namespace std;
int main()
{
	int n;
	long a[100];
	while(cin>>n)
	{
		if(n==0)
			break;
		for(int i=4;i<55;i++)
		{
			a[0]=1;a[1]=2;a[2]=3;a[3]=4;
			a[i]=a[i-1]+a[i-3];
		}
		cout<<a[n-1]<<endl;
	}
	return 0;
}