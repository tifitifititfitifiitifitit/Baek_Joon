#include<iostream>
using namespace std;

int main() {
	int n,i,j,x=1;
	cin>>n;
	for(i=1;i<n;i++) x+=2;
	for(i=1;i<=n;i++) {
		for(j=1;j<i;j++) cout<<" ";
		for(j=1;j<=x;j++) cout<<"*";
		cout<<endl;
		x-=2;
	}
}