#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(void)
{
	int n,t;
	while(cin>>n)
	{
		int s=0,min=100,max=0;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			s+=t;
			if(t<min)
				min=t;
			if(t>max)
				max=t;
		}
		cout<<fixed<<setprecision(2)<<1.0*(s-min-max)/(n-2)<<endl;
	}
	return 0;
}