#include<iostream>
using namespace std;

void sort(int arr[], int n) {
    int temp;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            if(arr[j]>arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	sort(arr, n);
	int sum=arr[0], dap=arr[0];
	for(int i=1; i<n; i++) {
		sum+=arr[i];
		dap+=sum;		
	}
	cout<<dap;
}