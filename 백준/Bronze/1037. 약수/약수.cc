#include<iostream>
using namespace std;

int main() {
	int i, n, m, min=1000000, max=0;
	cin>>n;
	for(i=1;i<=n;i++) {
		cin>>m;
		if(m>max) max=m;
		if(m<min) min=m;
	}
	cout<<max*min;
}