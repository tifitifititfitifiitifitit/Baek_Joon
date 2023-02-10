#include<iostream>
using namespace std;

int gcd(int a, int b) {
	while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
	int a,b,n;
	cin>>a>>b;
	
	n=gcd(a,b);	//최대공약수 
	
	cout<<n<<endl<<(a*b)/n;
}
