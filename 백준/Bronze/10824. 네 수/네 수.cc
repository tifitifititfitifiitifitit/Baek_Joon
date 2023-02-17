#include<iostream>
#include<string>
using namespace std;

int main() {
	string a, b, c, d;
	cin >> a >> b >> c >> d;

	a += b;
	c += d;

	long long x = stoll(a);
	long long y = stoll(c);

	cout << x + y;
}