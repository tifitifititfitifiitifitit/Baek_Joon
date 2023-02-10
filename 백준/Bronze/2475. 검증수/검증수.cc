#include<iostream>
using namespace std;

int main() {
	int n=0, a;
	
	for(int i=1; i<=5; i++) {
		cin>>a;
		a*=a;
		n+=a%10;
	}
	
	cout<<n%10;
}