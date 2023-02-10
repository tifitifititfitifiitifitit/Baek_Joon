#include<iostream>
using namespace std;
    
long long arr[31][31];

int main() {
    int t, n, m;

    for(int i=1; i<31; i++) arr[1][i]=i;
    for(int i=2; i<31; i++) {
        for(int j=i; j<31; j++) {
            for(int k=j-1; k>=i-1; k--) {
				arr[i][j]+=arr[i-1][k];
			} 
        }
    }
    cin>>t;
    for(int i=0; i<t; i++) {
        cin>>n>>m;
        cout<<arr[n][m]<<endl;
    }
}