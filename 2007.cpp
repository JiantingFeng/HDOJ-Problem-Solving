#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b)
	{	
		if(a>b)
		{
			int c;
			c = a;
			a = b;
			b = c;
		}
		long int sum1 = 0;
		long int sum2 = 0;
		int i = a;
		while(i<=b)
		{
			if(i%2==0)
				sum2 += pow(i,2);
			else
				sum1 += pow(i,3);
			i++;
		}
		cout<<sum2<<' '<<sum1<<endl;
	}
	return 0;
}