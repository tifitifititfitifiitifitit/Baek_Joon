#include<iostream>
using namespace std;
int arr[1001];

void BubbleSort(int r) {
	if(r>=1) {
		for(int i=0;i<r;i++) {
			if(arr[i]>arr[i+1]) {
				int tmp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=tmp;
			}
		}
		BubbleSort(r-1);
	}
}

int main() {
	int n,i,j,tmp,x;
	cin>>n;
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	BubbleSort(n-1);
	for(i=0;i<n;i++) cout<<arr[i]<<endl;
}