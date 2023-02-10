#include<iostream>
using namespace std;
int arr[43];
int main() {
	int a,b,i,m,cnt=0;
	for(i=1;i<=10;i++) {
		cin>>m;
		arr[m%42]++;
	}
	for(i=0;i<=42;i++) {
		if(arr[i]!=0) cnt++;
	}
	cout<<cnt;
}