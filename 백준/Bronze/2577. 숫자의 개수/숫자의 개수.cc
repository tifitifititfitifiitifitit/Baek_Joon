#include<iostream>
using namespace std;
int arr[10];
int main() {
	int a,b,c,i;
	cin>>a>>b>>c;
	a*=b*c;
	while(1) {
		if(a==0) break;
		arr[a%10]++;
		a/=10;
	}
	for(i=0;i<=9;i++) cout<<arr[i]<<endl;
}