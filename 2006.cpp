#include<iostream>

using namespace std;

int main()
{
	int n,x,t;
	while(cin>>n)
	{
		t = 1;
		while(n--)
		{
			cin>>x;
			if(x%2!=0)
				t = t * x;
		}
		cout<<t<<endl;
	}
	return 0;
}