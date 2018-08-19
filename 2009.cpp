#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	float x;
	while(cin>>x)
	{
		float sum=0;
		cin>>n;
		while(n--)
		{
			sum+=x;
			x=pow(x,0.5);
		}
		cout<<setiosflags(ios::fixed);
		cout<<setprecision(2)<<sum<<endl;
	}
	return 0;
}