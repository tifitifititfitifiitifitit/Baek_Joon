#include<iostream>
#include<string>
using namespace std;

int main() {
	string x;
	int sum=10;
	cin>>x;
	
	for(int i=1; x[i]!='\0'; i++) {
		if(x[i]==x[i-1]) sum+=5;
		else sum+=10;
	}
	
	cout<<sum;
}