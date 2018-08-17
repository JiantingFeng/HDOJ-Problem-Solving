#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double x1,x2,y1,y2;
	double distance;
	while(cin>>x1>>y1>>x2>>y2)
	{
		distance = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
		cout<<setiosflags(ios::fixed);  
		cout<<setprecision(2) << distance << endl; 
	}
	return 0;
}