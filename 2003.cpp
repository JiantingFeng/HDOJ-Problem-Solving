#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	
	double a,b;
	while(cin>>a)
	{
		if(a>=0)
			b=a;
		else
			b=-a;

	cout<<setiosflags(ios::fixed);
	cout<<setprecision(2)<<b<<endl;
	}
	return 0;
}


