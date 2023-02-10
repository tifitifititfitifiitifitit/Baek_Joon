#include<iostream>
using namespace std;

int main() {
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++) {
		if(i%2==0) cout<<" ";
		for(j=1;j<=n;j++) cout<<"* ";
		cout<<endl;
	}
}