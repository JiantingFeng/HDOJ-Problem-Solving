#include<iostream>

using namespace std;

int main()
{
	int n;
	double x;
	while(cin>>n&&n!=0)
	{
		int pos=0,neg=0,zer=0;
		while(n--)
		{
			cin>>x;
			if(x>0)
				pos++;
			else if(x==0)
				zer++;
			else
				neg++;
		}
		cout<<neg<<' '<<zer<<' '<<pos<<endl;
	}
	return 0;
}