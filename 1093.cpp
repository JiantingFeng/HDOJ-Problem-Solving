#include<iostream>
using namespace std;
int main(){
	int n1,n2,x;
	cin>>n1;
	while(n1--){
		int sum=0;
		cin>>n2;
		while(n2--){
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
	}
	return 0;
}