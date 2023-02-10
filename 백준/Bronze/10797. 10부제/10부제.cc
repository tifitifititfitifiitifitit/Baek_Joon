#include<iostream>
using namespace std;

int main() {
	int n,i,cnt=0,arr[5];
	cin>>n;
	for(i=0;i<5;i++) {
		int m;
		cin>>m;
		if(m==n) cnt++;
	}
	cout<<cnt;
}