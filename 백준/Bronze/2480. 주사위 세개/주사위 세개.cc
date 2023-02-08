#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int a, b, c, price;
	cin>>a>>b>>c;
	
	//모두 같음 
	if(a==b && a==c) price = 10000 + a*1000;
	
	//2개 같음 
	else if(a==b || a==c) price = 1000 + a*100;
	else if(b==c) price = 1000 + b*100;

	//모두 다름 
	else price = max(a,max(b,c)) * 100;
	
	cout<<price;

	return 0;
}