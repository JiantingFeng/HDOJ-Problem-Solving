#include<iostream>
using namespace std;
int main(){
	int n,i=1;
	long int a,b;
	cin>>n;
	while(i<=n){
		cin>>a>>b;
		cout<<"Case "<<i<<":"<<endl;
		cout<<a<<" + "<<b<<" = "<<a+b<<endl<<endl;
		i++;
	}
	return 0;
}