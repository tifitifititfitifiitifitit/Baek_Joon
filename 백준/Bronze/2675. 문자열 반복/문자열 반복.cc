#include<iostream>
using namespace std;

int main() {
	char x[20];
	int n,m,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++) {
		cin>>m>>x;
		for(j=0;x[j]!='\0';j++) {
			for(k=1;k<=m;k++) {
				cout<<x[j];
			}
		}
		cout<<endl;
	}
}