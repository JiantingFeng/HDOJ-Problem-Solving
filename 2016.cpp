#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int min=a[0];
		int min_p=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				min_p=i;
			}
		}
		swap(a[0],a[min_p]);
		for(int i=0;i<n-1;i++)
			cout<<a[i]<<" ";
		cout<<a[n-1]<<endl;
	}
	return 0;
}