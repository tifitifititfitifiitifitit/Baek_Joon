#include<iostream>
using namespace std;

int main() {
	int n, input, tmp=1, sum=0;
	cin>>n;
	
	for(int i=0;i<n;i++) {
		cin>>input;
		if(input) {
			sum+=tmp;
			tmp++;
		}
		else tmp=1;
	}
	
	cout<<sum;
}