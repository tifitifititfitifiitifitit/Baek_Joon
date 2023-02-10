#include<iostream>
using namespace std;

int main() {
	int n,max=0,min=1001;
	cin>>n;
	for(int i=1;i<=n;i++) {
		int m;
		cin>>m;
		if(m>max) max=m;
		if(m<min) min=m;
	}
	cout<<max-min;
}