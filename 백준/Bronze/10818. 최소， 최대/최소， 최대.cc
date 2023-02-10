#include<iostream>
using namespace std;

int main() {
	int n,i,max=-1000000,min=1000000;
	cin>>n;
	for(i=1;i<=n;i++) {
		int k;
		cin>>k;
		if(k>=max) max=k;
		if(k<=min) min=k;
	}
	cout<<min<<" "<<max;
}