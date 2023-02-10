#include<iostream>
using namespace std;

int main() {
	int a, b, x, y;
	cin>>a>>b;
	
	x=((a%10)*100) + (((a%100)/10)*10) + a/100;
	y=((b%10)*100) + (((b%100)/10)*10) + b/100;

	cout<<(x>y?x:y);
}