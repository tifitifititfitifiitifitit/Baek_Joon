#include<iostream>
using namespace std;

int main() {
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++) {
		for(j=1;j<=i;j++) cout<<"*";
		for(j=1;j<=(n*2)-(i*2);j++) cout<<" ";
		for(j=1;j<=i;j++) cout<<"*";
		cout<<endl;
	}
	for(i=1;i<n;i++) {
		for(j=n-i;j>=1;j--) cout<<"*";
		for(j=1;j<=i*2;j++) cout<<" ";
		for(j=n-i;j>=1;j--) cout<<"*";
		cout<<endl;
	}
}