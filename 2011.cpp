#include<iostream>
#include<iomanip>
using namespace std;
int a[100];
int main(void)
{
	double f(int);
	int m;
	cin>>m;
	int i;
	for(i=0;i<m;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<f(a[i])<<endl;
	return 0;
}
double f(int n)
{
	int i;
	double sum = 0.0,t;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			t=-1.0/i;
		else
			t=1.0/i;
		sum+=t;
	}
	return sum;
}