#include<iostream>
using namespace std;

int main() {
	int n,i,j,x=1;
	cin>>n;
	for(i=1;i<n;i++) cout<<" ";
	cout<<"*\n";
	for(i=2;i<n;i++) {
		for(j=1;j<=n-i;j++) cout<<" ";
		cout<<"*";
		for(j=1;j<=x;j++) cout<<" ";
		cout<<"*\n";
		x+=2;
	}
	if(n!=1) for(i=1;i<=x+2;i++) cout<<"*";
}