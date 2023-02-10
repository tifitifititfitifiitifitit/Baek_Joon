#include<iostream>
using namespace std;

int main() {
	int x, n, m, cnt=0, arr[100][100]={0};
	cin>>x;
	
	for(int i=0; i<x; i++) {
		cin>>n>>m;
		
		for(int j=n; j<n+10; j++) {
			for(int k=m; k<m+10; k++) {
				if(arr[j][k]!=1) {
					arr[j][k]=1;
					cnt++;
				}
			}
		}
	}

	cout<<cnt;
	
	return 0;
}