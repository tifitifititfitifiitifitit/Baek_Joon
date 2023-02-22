#include<iostream>
using namespace std;

long long gcd(long long a, long long b) {
	while (b != 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}

long long lcm(long long a, long long b) {
	return a * b / gcd(a, b);
}

int main() {
	long long a, b;
	cin >> a >> b;
	cout << lcm(a, b);
}