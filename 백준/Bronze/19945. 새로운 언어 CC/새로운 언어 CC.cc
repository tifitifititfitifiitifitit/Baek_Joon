#include<iostream>
using namespace std;

int main() {
	int n, cnt=1;
	cin>>n;
	if(n==0) cnt=1;
	else if(n<0) cnt=32;
	else {
		while(n!=1) {
			cnt++;
			n/=2;
		}	
	}
	cout<<cnt;
}