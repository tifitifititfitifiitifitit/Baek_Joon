#include<iostream>
using namespace std;
    
int arr[101][101];

int main() {
    int a, b, c, d;
    for(int i=1; i<=4; i++) {
    	cin>>a>>b>>c>>d;
    	for(int j=a; j<c; j++) {
    		for(int k=b; k<d; k++) {
    			arr[j][k]=1;
			}
		}
	}
	int cnt=0;
	for(int i=1; i<=100; i++) {
		for(int j=1; j<=100; j++) {
			if(arr[i][j])cnt++;
		}
	}
	cout<<cnt;
}