#include<iostream>
using namespace std;
int main(){
	int n,x;
	while(cin>>n&&n!=0){
		int sum=0;
		while(n--){
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
	}
	return 0;
}