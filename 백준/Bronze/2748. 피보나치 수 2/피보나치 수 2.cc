#include<iostream>
using namespace std;

int main() {
	long long a=0, b=1, c=1;
	int n;
	cin>>n;
	
	for(int i=1; i<n; i++) {
		c=a+b;
		a=b;
		b=c;
	}
	
	cout<<c;
	return 0;
}