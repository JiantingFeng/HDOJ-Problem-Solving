#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,c;
    int a[110];
    while(cin>>n>>m)
    {
        if(n==0&&m==0)return 0;
        for(i=0;i<n;i++)
        	cin>>a[i];
        a[n]=m;
        sort(a,a+n+1);
        for(i=0;i<n;i++)
        	cout<<a[i]<<" ";
        cout<<a[n]<<endl;
    }
    return 0;
}