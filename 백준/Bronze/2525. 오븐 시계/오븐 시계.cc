#include<iostream>
using namespace std;

int main() {
	int h, m, n;
	cin>>h>>m>>n;
	
	m+=n;
	
	if(m>=60) {
		h += m/60;
		m %= 60;
	}
	if(h>=24) {
		h-=24;
	}
	
	cout<<h<<" "<<m;
	return 0;
}