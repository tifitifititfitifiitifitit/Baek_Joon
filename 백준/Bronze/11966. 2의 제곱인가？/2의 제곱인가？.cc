#include<iostream>
using namespace std;

int main() {
	int n,x=2;
	cin>>n;
	
	if(n==1) cout<<"1";
	else {
		while(1) {
			if(x==n) {
				cout<<"1";
				break;
			}
			else if(x<n) x*=2;
			else if(x>n) {
				cout<<"0";
				break;
			}
		}	
	}
}