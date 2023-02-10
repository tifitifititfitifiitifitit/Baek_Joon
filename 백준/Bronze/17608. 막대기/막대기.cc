#include<iostream>
using namespace std;

int main() {
	int n,i,max=0,cnt=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	for(i=n-1;i>=0;i--) {
		if(arr[i]>max) {
			max=arr[i];
			cnt++;
		}
	}
	cout<<cnt;
}