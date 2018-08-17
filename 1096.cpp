#include<iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m;
	while(m--){
		cin>>n;
		int x,sum=0;
		while(n--){
			cin>>x;
			sum+=x;
		}
		if(m!=0)
			cout<<sum<<endl<<endl;
		else
			cout<<sum<<endl;
		}
	return 0;
}