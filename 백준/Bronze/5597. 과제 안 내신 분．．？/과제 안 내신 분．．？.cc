#include<iostream>
using namespace std;

int main() {
	int arr[31] = {0};
	
	for(int i=1; i<=28; i++) {
		int x;
		cin>>x;
		arr[x]=1;
	}
	for(int i=1; i<=30; i++) {
		if(!arr[i]) cout<<i<<endl;
	}
	
	return 0;
}