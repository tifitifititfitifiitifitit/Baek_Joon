#include<iostream>
using namespace std;

int main() {
	int n, m, a[100][100], b[100][100];
	cin>>n>>m;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>a[i][j];
		}
	}
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>b[i][j];
			b[i][j] += a[i][j];
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}