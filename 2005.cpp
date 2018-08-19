#include<iostream>

using namespace std;

int main()
{
	int i,y,m,d;
	char ch;
	int month1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int month2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	while(cin>>y>>ch>>m>>ch>>d)
	{
		int sum = 0;
		i = m-2;
		if((y%4==0&&y%100!=0)||y%400==0)
		{
			while(i>=0)
				{
				sum = sum + month2[i];
				i--;
				}
			sum += d;
			cout<<sum<<endl;
		}
		else
		{
			while(i>=0)
				{
				sum = sum + month1[i];
				i--;
				}
			sum += d;
			cout<<sum<<endl;
		}
	}
	return 0;
}