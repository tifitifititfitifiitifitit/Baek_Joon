#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a=n,b,cnt=0;
	while(1) {
		b=a/10+a%10;
		a%=10;
		a*=10; //십의자리 
		b%=10;
		a+=b;
		cnt++;
		if(a==n) break;
	}
	cout<<cnt;
}