#include<iostream>
using namespace std;

int factorial(int n) {
	int sum = 1;
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	return sum;
}

int main() {
	int n, k;
	cin >> n >> k;

	cout << factorial(n) / (factorial(k) * factorial(n - k));
}