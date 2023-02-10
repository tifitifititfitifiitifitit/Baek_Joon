#include<iostream>
using namespace std;

int main() {
	int n,i,j,k,x=1;
	cin>>n;
	for(i=1;i<n;i++) x+=2;
	for(i=1;i<=n;i++) {
		for(j=1;j<i;j++) cout<<" ";
		for(k=1;k<=x;k++) cout<<"*";
		x-=2;
		cout<<endl;
	}
	x+=4;
	for(i=n-1;i>=1;i--) {
		for(j=1;j<i;j++) cout<<" ";
		for(k=1;k<=x;k++) cout<<"*";
		x+=2;
		cout<<endl;
	}
}