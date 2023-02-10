#include<iostream>
int main() {
	int n,sum=0;
	std::cin>>n;
	char x[n+1];
	for(int i=1;i<=n;i++) {
		std::cin>>x[i];
		sum+=x[i]-'0';
	}
	std::cout<<sum;
}