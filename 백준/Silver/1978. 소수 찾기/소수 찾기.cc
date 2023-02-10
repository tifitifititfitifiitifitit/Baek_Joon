#include<iostream>
using namespace std;

int isprime(int n) {
	for(int i=2; i<n; i++) {
		if(n%i==0) return 0;
	}
	return 1;
}

int main() {
	int n, cnt=0;
	cin>>n;
	
	for(int i=1; i<=n; i++) {
		int m;
		cin>>m;
		
		if(m!=1 && isprime(m)) cnt++;
	}
	
	cout<<cnt;
	return 0;
}