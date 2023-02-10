#include<iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a>=b&&a<=c||a>=c&&a<=b) cout<<a;			// b<a<c or c<a<b 
	else if(b>=a&&b<=c||b>=c&&b<=a) cout<<b;	// a<b<c or c<b<a 
	else if(c>=b&&c<=a||c>=a&&c<=b) cout<<c;	// b<c<a or a<c<b 
}