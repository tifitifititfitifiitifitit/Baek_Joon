#include<iostream>
using namespace std;

int main() {
	float arr[1001],sum=0;
	int n,i,max=0;
	cin>>n;
	
	for(i=1;i<=n;i++) {
		cin>>arr[i];
		if(arr[i]>max) max=arr[i];
	}
	
	for(i=1;i<=n;i++) {
		arr[i]=(arr[i]/max)*100;
		sum+=arr[i];
	}
	
	cout<<sum/n;
}