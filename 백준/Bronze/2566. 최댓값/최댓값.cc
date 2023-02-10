#include<iostream>
using namespace std;

int main() {
	int x, y, max=-1, arr[10][10];
	
	for(int i=1; i<=9; i++) {
		for(int j=1; j<=9; j++) {
			cin>>arr[i][j];
			
			if(arr[i][j]>max) {
				max=arr[i][j];
				x=i;
				y=j;
			}
		}
	}

	cout << max << endl;
	cout << x << " " << y;
	
	return 0;
}