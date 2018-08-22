#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
	bool isntprimenumber(int);
	int l,r;
	while(cin>>l>>r)
	{
		if(l==0&&r==0)
			break;
		if(l>r)
			swap(l,r);
		int count=0;
		for(int i=l;i<=r;i++)
			if(isntprimenumber(i))
				count++;
		if(count!=0)
			cout<<"Sorry"<<endl;
		else
			cout<<"OK"<<endl;
	}
	return 0;
}
bool isntprimenumber(int n)
{
	int count=0;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
			count++;
	}
	if(count>1)
		return true;
	else
		return false;
}