#include<iostream>
using namespace std;

int main() {
	int n, ans = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b, c, sum;
		cin >> a >> b >> c;

		if (a == b && a == c) {
			sum = 10000 + (a * 1000);
		}
		else if (a != b && a != c && b != c) {
			sum = max(a, max(b, c)) * 100;
		}
		else {
			if (a == b) sum = 1000 + (a * 100);
			else if (a == c) sum = 1000 + (a * 100);
			else sum = 1000 + (b * 100);
		}

		if (sum > ans) ans = sum;
	}

	cout << ans;
}