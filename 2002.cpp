#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double r,v;
	const double pi=3.1415927;
	while(cin>>r)
	{
		v = (4*pi*pow(r,3))/3;
		cout<<setiosflags(ios::fixed);  
		cout<<setprecision(3) << v << endl; 
	}
	return 0;
}